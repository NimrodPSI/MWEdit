/*===========================================================================
 *
 * File:	EsmGlobal.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMGLOBAL_H
#define __ESMGLOBAL_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "EsmRecord.h"
  #include "EsmSubFloat.h"
  #include "EsmSubByte.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Global types */
  #define MWESM_GLOBAL_SHORT	('s')
  #define MWESM_GLOBAL_LONG	('l')
  #define MWESM_GLOBAL_FLOAT	('f')
  	
/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmGlobal Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmGlobal : public CEsmRecord {
  DECLARE_SUBRECCREATE();

  /*---------- Begin Protected Class Members --------------------*/
protected:
  CEsmSubByte*	m_pTypeData;
  CEsmSubFloat* m_pFloatData;


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  CEsmGlobal();
  //virtual ~CEsmGlobal() { Destroy(); }
  virtual void Destroy (void);

  	/* Compare two fields of the record */
  virtual int CompareFields (const int FieldID, CEsmRecord* pRecord);

  	/* Return a new record object */
  static CEsmRecord* Create (void);

  	/* Create a new, empty, record */
  virtual void CreateNew (CEsmFile* pFile);

  	/* Get a string representation of a particular field */
  virtual const TCHAR* GetFieldString (const int FieldID);

  	/* Return a text representation of the item type */
  virtual const TCHAR* GetItemType (void) { return _T("Global"); }

  	/* Get class members */
  int		GetType		(void) { return (int) (m_pTypeData ? m_pTypeData->GetValue() : MWESM_GLOBAL_FLOAT); }
  float		GetValue	(void) { return (m_pFloatData ? m_pFloatData->GetValue() : 0); }
  const TCHAR*	GetTypeString	(void);
  int		GetTypeID	(const TCHAR* pString);
  
  	/* Used to save the various record elements */
  virtual void OnAddSubRecord (CEsmSubRecord* pSubRecord);

	/* Set class members */
  void SetType  (const int    Type) { if (m_pTypeData)  m_pTypeData->SetValue(Type); }
  void SetValue (const float Value) { if (m_pFloatData) m_pFloatData->SetValue(Value); }

	/* Set a certain field of the record */
  virtual bool SetFieldValue (const int FieldID, const TCHAR* pString);

 };
/*===========================================================================
 *		End of Class CEsmGlobal Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmBodyPart.H
 *=========================================================================*/
