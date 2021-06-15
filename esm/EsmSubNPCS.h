/*===========================================================================
 *
 * File:	EsmsubNPCS.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBNPCS_H
#define __ESMSUBNPCS_H


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
	TCHAR	Item[MWESM_ID_MAXSIZE];	/* Might not be NULL terminated */
   } npcsdata_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubNPCS Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubNPCS : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubNPCS();
  //virtual ~CEsmSubNPCS() { Destroy(); }
  //virtual void Destroy (void);

	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubNPCS);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	CreateArrayPointerL(m_pData, byte, sizeof(npcsdata_t)); 
	m_RecordSize = sizeof(npcsdata_t); 
	memset(m_pData, 0, sizeof(npcsdata_t));
   }

	/* Get class methods */
  npcsdata_t*  GetData (void) { return (npcsdata_t *) m_pData; }
  const TCHAR* GetName (void) { return (GetData()->Item); }

    	/* Checks if the sub-record uses the given ID */
  virtual bool IsUsed (const TCHAR* pID) { return (StringCompare(GetName(), pID, false) == 0); }

	/* Set class methods */
  void SetName (const TCHAR* pString) { TSTRNCPY(GetData()->Item, pString, MWESM_ID_MAXSIZE); }

 };
/*===========================================================================
 *		End of Class CEsmSubNPCST Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmsubNPCS.H
 *=========================================================================*/
