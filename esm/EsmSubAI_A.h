/*===========================================================================
 *
 * File:	EsmsubAI_A.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBAI_A_H
#define __ESMSUBAI_A_H


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
 * Begin Definitions
 *
 *=========================================================================*/
/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Type Definitions
 *
 *=========================================================================*/
#pragma pack(push, 1)

  typedef struct {
	char Name[32];
 	byte Unknown;
  } ai_adata_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubAI_A Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubAI_A : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubAI_A();
  //virtual ~CEsmSubAI_A() { Destroy(); }
  //virtual void Destroy (void);

	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubAI_A);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	CreateArrayPointerL(m_pData, byte, sizeof(ai_adata_t)); 
	m_RecordSize = sizeof(ai_adata_t); 
	memset(m_pData, 0, sizeof(ai_adata_t));
	GetAIData()->Unknown = 1;
   }

	/* Get class methods */
  ai_adata_t*  GetAIData  (void) { return ((ai_adata_t *) m_pData); }
  const TCHAR* GetName    (void) { return (m_pData ? GetAIData()->Name : _T("")); }
  byte         GetUnknown (void) { return (GetAIData()->Unknown); }

  	/* Checks if the sub-record uses the given ID */
  virtual bool IsUsed (const TCHAR* pID) { return (TSTRNICMP(GetAIData()->Name, pID, 32) == 0); }

	/* Set class methods */
  void SetName    (const TCHAR* pString) { if (m_pData) TSTRNCPY(GetAIData()->Name, pString, 32); }
  void SetUnknown (const byte   Value)   { GetAIData()->Unknown = Value; }

 };
/*===========================================================================
 *		End of Class CEsmSubAI_A Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmsubAI_A.H
 *=========================================================================*/
