/*===========================================================================
 *
 * File:	Ssarray.CPP
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	Thursday, December 18, 2003
 *
 * Description
 *
 *=========================================================================*/

	/* Include Files */
#include "ssarray.h"


/*===========================================================================
 *
 * Begin Local Definitions
 *
 *=========================================================================*/
  DEFINE_FILE("SSArray.cpp");
/*===========================================================================
 *		End of Local Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Constructor
 *
 *=========================================================================*/
CSStringArray::CSStringArray () {
  //DEFINE_FUNCTION("CSStringArray::CSStringArray()");

 }
/*===========================================================================
 *		End of Class CSStringArray Constructor
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Method - void Destroy (void);
 *
 *=========================================================================*/
void CSStringArray::Destroy (void) {
  //DEFINE_FUNCTION("CSStringArray::Destroy()");

  DeleteStrings();
 }
/*===========================================================================
 *		End of Class Method CSStringArray::Destroy()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Method - CSString* Add (pString);
 *
 * Adds a new string object to the array, returning the new element. Returns
 * NULL on any error.
 *
 *=========================================================================*/
CSString* CSStringArray::Add (const TCHAR* pString) {
  DEFINE_FUNCTION("CSStringArray::Add()");
  CSString* pNewString;

	/* Allocate and initialize the new object */
  CreateClassPointer(pNewString, CSString, pString);
  m_Strings.Add(pNewString);

  return (pNewString);
 }
/*===========================================================================
 *		End of Class Method CSStringArray::Add()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Method - void DeleteElement (pString);
 *
 * Attempts to delete the given element from the array. Ignores invalid input.
 *
 *=========================================================================*/
void CSStringArray::DeleteElement (CSString* pString) {
  int Index;

	/* Attempt to find the element in the array */
  Index = m_Strings.FindElement(pString);
  if (Index < 0) return;

  DeleteElement(Index);
 }
/*===========================================================================
 *		End of Class Method CSStringArray::DeleteElement()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Method - void DeleteElement (Index);
 *
 * Deletes an elements from its array index. Ignores invalid input.
 *
 *=========================================================================*/
void CSStringArray::DeleteElement (const int Index) {
  DEFINE_FUNCTION("CSStringArray::DeleteElement()");
  CSString* pString;
	
	/* Get string element and ensure it is valid */
  pString = m_Strings.GetAt(Index);
  if (pString == NULL) return;

	/* Delete element from array */
  m_Strings.DeleteElement(Index);

	/* Delete element string */
  DestroyPointer(pString);
 }
/*===========================================================================
 *		End of Class Method CSStringArray::DeleteElement()
 *=========================================================================*/


/*===========================================================================
 *
 * Class CSStringArray Method - void DeleteStrings (void);
 *
 * Protected class method to delete all strings in the array.
 *
 *=========================================================================*/
void CSStringArray::DeleteStrings (void) {
  DEFINE_FUNCTION("CSStringArray::DeleteStrings()");
  CSString* pString;
  int       Index;

  for (Index = 0; Index < m_Strings.GetNumElements(); Index++) {
    pString = m_Strings.GetAt(Index);
    DestroyPointer(pString);
   }

  m_Strings.RemoveAll();
 }
/*===========================================================================
 *		End of Class Method CSStringArray::DeleteStrings()
 *=========================================================================*/
