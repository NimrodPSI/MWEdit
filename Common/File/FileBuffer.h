/*===========================================================================
 *
 * File:	Filebuffer.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	Friday, December 05, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __FILEBUFFER_H
#define __FILEBUFFER_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "dl_err.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Default input buffer size in bytes */
  #define FILEBUF_DEFAULT_BUFFER_SIZE 1024

/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CFileBuffer Definition
 *
 * Description
 *
 *=========================================================================*/
class CFileBuffer {

  /*---------- Begin Private Class Members ----------------------*/
private:
  FILE*		m_pFile;		/* File handle */
  bool		m_Attached;		/* Does handle belong to us? */

  char*		m_pBuffer;		/* Buffered input data */
  int		m_BufferSize;
  int		m_MaxBufferSize;
  int		m_BufferIndex;
  int		m_FileIndex;


  /*---------- Begin Protected Class Methods --------------------*/
protected:

	/* Ensure the given amount of data is available */
  bool GetData_Priv (const int Size);
  bool GetData      (const int Size) { return ((Size <= m_BufferSize - m_BufferIndex) ? true : GetData_Priv(Size)); }


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  CFileBuffer();
  virtual ~CFileBuffer();
  virtual void Destroy (void);

	/* Attach an existing file handle */
  void Attach (FILE* pFile);

	/* Close or detach a file */
  void Close (void);

	/* Get class members */
  int  GetBufferSize    (void) { return (m_BufferSize); }
  int  GetMaxBufferSize (void) { return (m_MaxBufferSize); }
  int  GetBufferIndex   (void) { return (m_BufferIndex); }
  int  Tell	        (void) { return (m_FileIndex); }
  bool IsEOF		(void) { return (feof(m_pFile) != 0 && m_BufferIndex >= m_BufferSize); }

	/* Open a file */
  bool Open (const TCHAR* pFilename, const TCHAR* pMode);

	/* Read data from the file buffer */
  bool ReadChar  (char&  InputChar);
  bool ReadShort (short& InputValue);
  bool ReadInt   (int&   InputValue);
  bool ReadLong  (long&  InputValue);
  bool Read      (char*  pData, const int Size);
  bool ReadData  (char*  pData, const int Size);

	/* Set the size of the input buffer */
  void SetBufferSize (const int Size);

 };
/*===========================================================================
 *		End of Class CFileBuffer Definition
 *=========================================================================*/




#endif
/*===========================================================================
 *		End of File Filebuffer.H
 *=========================================================================*/
