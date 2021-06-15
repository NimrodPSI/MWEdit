/*===========================================================================
 *
 * File:	EsmRepair.CPP
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/

	/* Include Files */
#include "EsmRepair.h"


/*===========================================================================
 *
 * Begin Local Definitions
 *
 *=========================================================================*/
  DEFINE_FILE("EsmRepair.cpp");
/*===========================================================================
 *		End of Local Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Sub-Record Create Array
 *
 *=========================================================================*/
const esmsubreccreate_t CEsmRepair::s_SubRecCreate[] = {
	{ MWESM_SUBREC_NAME,	CEsmSubNameFix::Create },
	{ MWESM_SUBREC_FNAM,	CEsmSubNameFix::Create },
	{ MWESM_SUBREC_MODL,	CEsmSubNameFix::Create },
	{ MWESM_SUBREC_ITEX,	CEsmSubNameFix::Create },
	{ MWESM_SUBREC_SCRI,	CEsmSubNameFix::Create },
	{ MWESM_SUBREC_RIDT,	CEsmSubRIDT::Create },
	{ NULL,			CEsmSubRecord::Create }	/* Must be last record */
 };
/*===========================================================================
 *		End of Sub-Record Create Array
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Constructor
 *
 *=========================================================================*/
CEsmRepair::CEsmRepair () {
  //DEFINE_FUNCTION("CEsmRepair::CEsmRepair()");
  m_pRepairData = NULL;
 }
/*===========================================================================
 *		End of Class CEsmRepair Constructor
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Method - void Destroy (void);
 *
 * Description
 *
 *=========================================================================*/
void CEsmRepair::Destroy (void) {
  //DEFINE_FUNCTION("CEsmRepair::Destroy()");
  m_pRepairData = NULL;

  CEsmItem2::Destroy();
 }
/*===========================================================================
 *		End of Class Method CEsmRepair::Destroy()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Method - int CompareFields (FieldID, pRecord);
 *
 * Compares the given field of the current record and the supplied record.
 * Returns a value which can be used for sorting the records..
 *
 *=========================================================================*/
int CEsmRepair::CompareFields (const int FieldID, CEsmRecord* pRecord) {
  DEFINE_FUNCTION("CEsmRepair::CompareFields()");
  CEsmRepair* pRepair;

	/* Ensure the correct type */
  if (!pRecord->IsType(MWESM_REC_REPA)) return CEsmItem2::CompareFields(FieldID, pRecord);
  pRepair = (CEsmRepair *) pRecord;

  switch (FieldID) {
    case ESM_FIELD_QUALITY:
	return (int)(GetQuality()*100 - pRepair->GetQuality()*100);
    case ESM_FIELD_USES:
	return GetUses() - pRepair->GetUses();
    default:
	return CEsmItem2::CompareFields(FieldID, pRecord); 
   }
 }
/*===========================================================================
 *		End of Class Method CEsmRepair::CompareFields()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Method - CEsmRecord* Create (void);
 *
 * Static class method to create a new record object.
 *
 *=========================================================================*/
CEsmRecord* CEsmRepair::Create (void) {
  DEFINE_FUNCTION("CEsmRepair::Create()");
  CEsmRecord* pRecord;

  CreatePointer(pRecord, CEsmRepair);
  return (pRecord);
 }
/*===========================================================================
 *		End of Class Method CEsmRepair::Create()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Method - void CreateNew (pFile);
 *
 * Creates a new, empty, record.
 *
 *=========================================================================*/
void CEsmRepair::CreateNew (CEsmFile* pFile) {

	/* Call the base class record first */
  CEsmItem2::CreateNew(pFile);

	/* Create the item sub-records */
  AllocateSubRecord(MWESM_SUBREC_RIDT);
  m_pRepairData->CreateNew();
 }
/*===========================================================================
 *		End of Class Method CEsmRepair::CreateNew()
 *=========================================================================*/


/*===========================================================================
 *
 * Class TCHAR* CEsmRepair Method - const GetFieldString (FieldID);
 *
 * Returns a string representation of the given field. Always returns
 * a valid string.
 *
 *=========================================================================*/
const TCHAR* CEsmRepair::GetFieldString (const int FieldID) {
  static TCHAR s_Buffer[32];

  switch (FieldID) {
    case ESM_FIELD_USES:
	snprintf (s_Buffer, 31, _T("%ld"), GetUses());
	return (s_Buffer);
    case ESM_FIELD_QUALITY:
	snprintf (s_Buffer, 31, _T("%.2f"), GetQuality());
	return (s_Buffer);
    default:
	return CEsmItem2::GetFieldString(FieldID);
   }
  
 }
/*===========================================================================
 *		End of Class Method TCHAR* CEsmRepair::GetFieldString()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Event - void OnAddSubRecord (pSubRecord);
 *
 *=========================================================================*/
void CEsmRepair::OnAddSubRecord (CEsmSubRecord* pSubRecord) {

  if (pSubRecord->IsType(MWESM_SUBREC_RIDT))
    m_pRepairData = (CEsmSubRIDT *) pSubRecord;
  else
    CEsmItem2::OnAddSubRecord(pSubRecord);

 }
/*===========================================================================
 *		End of Class Event CEsmRepair::OnAddSubRecord()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CEsmRepair Method - bool SetFieldValue (pString);
 *
 * Sets a particular field to the given value. Returns false on any error.
 * Assumes that the input string is non-NULL.
 *
 *=========================================================================*/
bool CEsmRepair::SetFieldValue (const int FieldID, const TCHAR* pString) {

  switch (FieldID) { 
    case ESM_FIELD_USES:
        SetUses(atoi(pString));
	return (true);
    case ESM_FIELD_QUALITY:
        SetQuality((float) atof(pString));
	return (true);
   };

	/* No matching field found */
  return CEsmItem2::SetFieldValue(FieldID, pString);
 }
/*===========================================================================
 *		End of Class Method CEsmRepair::SetFieldValue()
 *=========================================================================*/
