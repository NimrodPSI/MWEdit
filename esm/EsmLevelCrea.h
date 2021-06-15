/*===========================================================================
 *
 * File:	EsmLevelCrea.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMLEVELCREA_H
#define __ESMLEVELCREA_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "EsmRecord.h"
  #include "EsmSubName.h"
  #include "EsmSubLong.h"
  #include "EsmSubShort.h"
  #include "EsmSubByte.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

  #define MWESM_LEVCREAFLAG_ALLPC 1
  	
/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmLevelCrea Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmLevelCrea : public CEsmRecord {
  DECLARE_SUBRECCREATE();

  /*---------- Begin Protected Class Members --------------------*/
protected:
  CEsmSubLong*	m_pData;	/* Reference to sub-records */
  CEsmSubByte*	m_pNNam;
  CEsmSubLong*	m_pIndex;
  

  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  CEsmLevelCrea();
  //virtual ~CEsmLevelCrea() { Destroy(); }
  virtual void Destroy (void);

  	/* Compare two fields of the record */
  virtual int CompareFields (const int FieldID, CEsmRecord* pRecord);

  	/* Return a new record object */
  static CEsmRecord* Create (void);

  	/* Create a new, empty, record */
  virtual void CreateNew (CEsmFile* pFile);

	/* Return a string of the creature list */
  const TCHAR* GetCreaListString (void);

  	/* Get a string representation of a particular field */
  virtual const TCHAR* GetFieldString (const int FieldID);

  	/* Return a text representation of the item type */
  virtual const TCHAR* GetItemType (void) { return _T("Level Creature"); }

  	/* Get class members */
  long	       GetDataFlag   (void) { return (m_pData ? m_pData->GetValue() : 0); }
  int	       GetNNamFlag   (void) { return (int)(m_pNNam ? m_pNNam->GetValue() : 0); }
  bool	       IsAllPC       (void) { return ((GetDataFlag() & MWESM_LEVCREAFLAG_ALLPC) != 0); }
  int	       GetChanceNone (void) { return (int)(GetNNamFlag()); }
  int	       GetListSize   (void) { return (m_pIndex ? m_pIndex->GetValue() : 0); }
  
  	/* Used to save the various record elements */
  virtual void OnAddSubRecord (CEsmSubRecord* pSubRecord);

	/* Set class members */
  void SetChanceNone (const int Value) { if (m_pNNam)  m_pNNam->SetValue(Value); }
  void SetAllPC      (const bool Flag) { if (m_pData)  m_pData->SetFlag(MWESM_LEVCREAFLAG_ALLPC, Flag); }
  void SetListSize   (const int Value) { if (m_pIndex) m_pIndex->SetValue(Value); }

  	/* Set a certain field of the record */
  virtual bool SetFieldValue (const int FieldID, const TCHAR* pString);

 };
/*===========================================================================
 *		End of Class CEsmLevelCrea Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmBodyPart.H
 *=========================================================================*/
