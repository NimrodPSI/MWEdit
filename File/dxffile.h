/*===========================================================================
 *
 * File:	Dxffile.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	Friday, June 22, 2001
 *
 * Defines the CDxfFile class for handling DXF AutoCad files.
 *
 *=========================================================================*/
#ifndef __DXFFILE_H
#define __DXFFILE_H


/*===========================================================================
 *
 * Begin Required Include Files
 *
 *=========================================================================*/
  #include "common/file/genfile.h"
/*===========================================================================
 *		End of Required Include Files
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CDxfFile Definition
 *
 * Handles simple input/output of AutoCad DXF files.
 *
 *=========================================================================*/
class CDxfFile : public CGenFile {

  /*---------- Begin Private Class Members ----------------------*/
private:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CDxffile();
  //virtual ~CDxffile() { Destroy(); }
  //virtual void Destroy (void);

	
  bool StartEntities (void);
  bool EndEntities	(void);
  bool EndFile	(void);

	/* Polyline commands */
  bool StartPolyline   (const int Flags);
  bool StartPolyline   (void);
  bool Start3DPolyline (void);
  bool EndPolyline     (void);
  bool WriteVertexL    (const float X, const float Y, const float Z, const int Flags, const int LayerNumber);
  bool WriteVertex     (const float X, const float Y, const float Z, const int Flags);
  bool WriteVertex     (const float X, const float Y, const float Z);
  bool Write3DVertex   (const float X, const float Y, const float Z);
  bool Write3DVertexL  (const float X, const float Y, const float Z, const int LayerNumber);

	/* Layer commands */
  bool WriteLayer (const int LayerNumber);

 };
/*===========================================================================
 *		End of Class CDxfFile Definition
 *=========================================================================*/


/*===========================================================================
 *
 * Begin CDxffile Inline Methods
 *
 *=========================================================================*/

	/* Polyline commands */
inline bool CDxfFile::StartPolyline   (const int Flags) { return Printf("  0\nPOLYLINE\n  6\nCONTINUOUS\n 66\n  1\n 70\n%d\n", Flags); }
inline bool CDxfFile::Start3DPolyline (void)		   { return StartPolyline(8); }
inline bool CDxfFile::StartPolyline   (void)		   { return Printf("  0\nPOLYLINE\n  6\nCONTINUOUS\n 66\n  1\n"); }
inline bool CDxfFile::EndPolyline	 (void)		   { return Printf("  0\nSEQEND\n"); }

inline bool CDxfFile::WriteVertex     (const float X, const float Y, const float Z, const int Flags) { 
  return Printf ("  0\nVERTEX\n 70\n%d\n 10\n%f\n 20\n%f\n 30\n%f\n", Flags, X, Y, Z);
 }

inline bool CDxfFile::WriteVertexL    (const float X, const float Y, const float Z, const int Flags, const int LayerNumber) { 
  return Printf ("  0\nVERTEX\n 70\n%d\n  8\n%d\n 10\n%f\n 20\n%f\n 30\n%f\n", Flags, LayerNumber, X, Y, Z);
 }

inline bool CDxfFile::WriteVertex     (const float X, const float Y, const float Z) {
  return Printf ("  0\nVERTEX\n 10\n%f\n 20\n%f\n 30\n%f\n", X, Y, Z);
 }

inline bool CDxfFile::Write3DVertex   (const float X, const float Y, const float Z) {
  return WriteVertex(X, Y, Z, 32);
 }

inline bool CDxfFile::Write3DVertexL  (const float X, const float Y, const float Z, const int LayerNumber) {
  return WriteVertexL(X, Y, Z, 32, LayerNumber);
 }

	/* Section commands */
inline bool CDxfFile::StartEntities  (void) { return Printf("  0\nSECTION\n  2\nENTITIES\n"); } 
inline bool CDxfFile::EndEntities    (void) { return Printf("  0\nENDSEC\n"); } 
inline bool CDxfFile::EndFile	(void) { return Printf("  0\nEOF\n"); }

	/* Layer commands */
inline bool CDxfFile::WriteLayer (const int LayerNumber) { return Printf("  8\n%d\n", LayerNumber); }

/*===========================================================================
 *		End of CDxffile Inline Methods
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File Dxffile.H
 *=========================================================================*/
