/*===========================================================================
 *
 * File:	EsmsubName32.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBNAME32_H
#define __ESMSUBNAME32_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "EsmSubBase.h"
  #include "string/SString.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubName32 Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubName32 : public CEsmSubRecord {

  /*---------- Begin Proected Class Members ---------------------*/
protected:
  char m_NameData[33];


  /*---------- Begin Protected Class Methods --------------------*/
protected:

	/* Helper input methods */
  virtual bool ReadData  (CGenFile& File) { 
	if (m_RecordSize > 32) {
	  ErrorHandler.AddError(ERR_BADINPUT, _T("Invalid CEsmSubName32 record size of '%d'!"), m_RecordSize);
	  return (false);
	 }

	 memset(m_NameData, 0, 33);
	 return File.Read((TCHAR *)(const TCHAR*)m_NameData, m_RecordSize);
	}

  virtual bool WriteData (CGenFile& File) { 
	return File.Write((const TCHAR *)m_NameData, 32); 
      }


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  CEsmSubName32() { 
	memset(m_NameData, 0, 33);
      }

  //virtual ~CEsmSubName32() { Destroy(); }
  //virtual void Destroy (void);

	/* Copy from another name record */
  virtual void Copy (CEsmSubRecord* pSubRecord) {
	Destroy();
	m_Type.SetType(pSubRecord->GetType());
	m_RecordSize = 32;
	SetName(((CEsmSubName32 *)pSubRecord)->GetName());
   }


	/* Create a name object */
  static CEsmSubRecord* Create (void) {
  	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubName32);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	m_RecordSize = 32; 
   }

  	/* Finds text in the sub-record */
  virtual bool Find (esmfind_t& FindData) { return (stristr(m_NameData, FindData.pText) != NULL); }

	/* Get class methods */
  const TCHAR* GetName		(void) const { return (&m_NameData[0]); }
  virtual long GetRecordSize	(void) const { return (32); }

  	/* Checks if the sub-record uses the given ID */
  virtual bool IsUsed (const TCHAR* pID) { return (TSTRNICMP(m_NameData, pID, 32) == 0); }

	/* Set class methods */
  void SetName (const TCHAR* pName) { memset(m_NameData, 0, 33); strnncpy(m_NameData, pName, 32); }

 };
/*===========================================================================
 *		End of Class CEsmSubName32 Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmSubNameFix.H
 *=========================================================================*/
