/*===========================================================================
 *
 * File:	EsmsubaBYDTt.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBBYDT_H
#define __ESMSUBBYDT_H


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

	/* Part types */
  #define MWESM_PARTTYPE_MIN      0
  #define MWESM_PARTTYPE_SKIN     0
  #define MWESM_PARTTYPE_CLOTHING 1
  #define MWESM_PARTTYPE_ARMOR    2
  #define MWESM_PARTTYPE_MAX      2

	/* Parts */
  #define MWESM_PART_MIN	0
  #define MWESM_PART_HEAD	0
  #define MWESM_PART_HAIR	1
  #define MWESM_PART_NECK	2
  #define MWESM_PART_CHEST	3
  #define MWESM_PART_GROIN	4
  #define MWESM_PART_HAND	5
  #define MWESM_PART_WRIST	6
  #define MWESM_PART_FOREARM	7
  #define MWESM_PART_UPPERARM	8
  #define MWESM_PART_FOOT	9
  #define MWESM_PART_ANKLE	10
  #define MWESM_PART_KNEE	11
  #define MWESM_PART_UPPERLEG	12
  #define MWESM_PART_CLAVICLE	13
  #define MWESM_PART_TAIL	14
  #define MWESM_PART_MAX	14

	/* Flag bits */
  #define MWESM_BODYFLAG_FEMALE   1
  #define MWESM_BODYFLAG_PLAYABLE 2

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
	byte Part;
	byte Vampire;
	byte Flags;
	byte PartType;
  } bodypartdata_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubBYDT Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubBYDT : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubBYDT() {}
  //virtual ~CEsmSubBYDT() { Destroy(); }
  //virtual void Destroy (void) { }

	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubBYDT);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	CreateArrayPointerL(m_pData, byte, sizeof(bodypartdata_t)); 
	m_RecordSize = sizeof(bodypartdata_t); 
	memset(m_pData, 0, sizeof(bodypartdata_t));
   }

	/* Get class methods */
  bodypartdata_t* GetBodyData (void) { return ((bodypartdata_t *) m_pData); }
  byte		  GetPart     (void) { return (GetBodyData()->Part); }
  byte		  GetPartType (void) { return (GetBodyData()->PartType); }
  byte		  GetVampire  (void) { return (GetBodyData()->Vampire); }
  byte		  GetFlags    (void) { return (GetBodyData()->Flags); }
  bool		  IsVampire   (void) { return (GetBodyData()->Vampire != 0); }
  bool		  IsFemale    (void) { return ((GetFlags() & MWESM_BODYFLAG_FEMALE)   != 0); }
  bool		  IsPlayable  (void) { return ((GetFlags() & MWESM_BODYFLAG_PLAYABLE) != 0); }

	/* Set or clear flags */
  void SetFlag     (const long Flag, const bool Set) {
	if (Set) GetBodyData()->Flags |= Flag;
	else	 GetBodyData()->Flags &= ~Flag;
   }

	/* Set class methods */
  void SetPart     (const byte Value) { if (Value >= MWESM_PART_MIN     && Value <= MWESM_PART_MAX)     GetBodyData()->Part     = Value; }
  void SetPartType (const byte Value) { if (Value >= MWESM_PARTTYPE_MIN && Value <= MWESM_PARTTYPE_MAX) GetBodyData()->PartType = Value; }
  void SetVampire  (const bool Flag)  { GetBodyData()->Vampire = Flag ? 1 : 0; }
  void SetFemale   (const bool Flag)  { SetFlag(MWESM_BODYFLAG_FEMALE,   Flag); }
  void SetPlayable (const bool Flag)  { SetFlag(MWESM_BODYFLAG_PLAYABLE, Flag); }

 };
/*===========================================================================
 *		End of Class CEsmSubBYDT Definition
 *=========================================================================*/



#endif
/*===========================================================================
 *		End of File EsmsubBYDT.H
 *=========================================================================*/


