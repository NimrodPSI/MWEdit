/*===========================================================================
 *
 * File:	EsmSubFRMR.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBFRMR_H
#define __ESMSUBFRMR_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "EsmSubBase.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Type Definitions
 *
 *=========================================================================*/
#pragma pack(push, 1)

  typedef struct {
	int Index	: 24;
	int Flag	: 8;
   } frmrdata_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubFRMR Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubFRMR : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:
  frmrdata_t	m_Data;

  /*---------- Begin Protected Class Methods --------------------*/
protected:

  virtual bool ReadData  (CGenFile& File) { return File.Read ((char *)&m_Data, sizeof(frmrdata_t)); }
  virtual bool WriteData (CGenFile& File) { return File.Write((char *)&m_Data, sizeof(frmrdata_t)); }


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubFRMR();
  //virtual ~CEsmSubFRMR() { Destroy(); }
  //virtual void Destroy (void);

    	/* Copy from another name record */
  virtual void Copy (CEsmSubRecord* pSubRecord) {
	m_Type.SetType(pSubRecord->GetType());
	m_RecordSize = pSubRecord->GetRecordSize();

	if (pSubRecord->IsType(MWESM_SUBREC_FRMR)) {
	  m_Data.Index = ((CEsmSubFRMR *) pSubRecord)->GetIndex();
	  m_Data.Flag  = ((CEsmSubFRMR *) pSubRecord)->GetFlag();
	 }
	else {
	  m_Data.Index = 0;
	  m_Data.Flag  = 0;
	 }
   }


	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubFRMR);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	m_RecordSize = sizeof(frmrdata_t); 
	m_Data.Index = 0;
	m_Data.Flag  = 0;
   }

	/* Finds text in the sub-record */
  virtual bool Find (esmfind_t& FindData) { return (false); }

	/* Get/set the long value directly */
  long GetValue (void)		   { return (*(long *)&m_Data); }
  long GetIndex (void)		   { return (m_Data.Index); }
  byte GetFlag  (void)		   { return (m_Data.Flag); }
  void SetValue (const long Value) { *(long *)&m_Data = Value; }
  void SetIndex (const long Index) { m_Data.Index = Index & 0x00FFFFFF; }
  void SetFlag  (const byte Flag)  { m_Data.Flag  = Flag; }
  
 };
/*===========================================================================
 *		End of Class CEsmSubAADT Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmsubINDX.H
 *=========================================================================*/
