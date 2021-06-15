/*===========================================================================
 *
 * File:	EsmsubBKDT.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBBKDT_H
#define __ESMSUBBKDT_H


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
	float  Weight;
	long   Value;
	long   Scroll;
	long   SkillID;
	long   EnchantPts;
   } bookdata_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubBKDT Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubBKDT : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubBKDT();
  //virtual ~CEsmSubBKDT() { Destroy(); }
  //virtual void Destroy (void);

	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubBKDT);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	CreateArrayPointerL(m_pData, byte, sizeof(bookdata_t)); 
	m_RecordSize = sizeof(bookdata_t); 
	memset(m_pData, 0, sizeof(bookdata_t));
	GetBookData()->SkillID = -1;
   }

	/* Get class members */
  bookdata_t*	GetBookData   (void) { return ((bookdata_t *) m_pData); }
  float		GetWeight     (void) { return (GetBookData()->Weight); }
  long		GetValue      (void) { return (GetBookData()->Value); }
  long		GetEnchantPts (void) { return (GetBookData()->EnchantPts); }
  long		GetSkillID    (void) { return (GetBookData()->SkillID); }
  bool		IsScroll      (void) { return (GetBookData()->Scroll != 0); }

	/* Set class members */
  void SetWeight     (const float Value) { GetBookData()->Weight     = Value; }
  void SetEnchantPts (const long  Value) { GetBookData()->EnchantPts = Value; }
  void SetValue      (const long  Value) { GetBookData()->Value      = Value; }
  void SetSkillID    (const long  Value) { GetBookData()->SkillID    = Value; }
  void SetScroll     (const bool  Flag)  { GetBookData()->Scroll     = Flag ? 1 : 0; }

 };
/*===========================================================================
 *		End of Class CEsmSubBKDT Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmsubBKDT.H
 *=========================================================================*/
