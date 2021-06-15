/*===========================================================================
 *
 * File:	EsmCreature.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMCREATURE_H
#define __ESMCREATURE_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "EsmItem1.h"
  #include "EsmSubCRDT.h"
  #include "EsmSubNPCO.h"
  #include "EsmSubAIDT.h"
  #include "EsmSubLong.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Creature flags */
  #define MWESM_CREAFLAG_BIPED		0x0001
  #define MWESM_CREAFLAG_RESPAWN	0x0002
  #define MWESM_CREAFLAG_WEAPSHIELD	0x0004
  #define MWESM_CREAFLAG_NONE		0x0008
  #define MWESM_CREAFLAG_SWIMS		0x0010
  #define MWESM_CREAFLAG_FLIES 		0x0020
  #define MWESM_CREAFLAG_WALKS		0x0040
  #define MWESM_CREAFLAG_DEFAULT	0x0048
  #define MWESM_CREAFLAG_ESSENTIAL	0x0080
  #define MWESM_CREAFLAG_WHITEBLOOD	0x0400
  #define MWESM_CREAFLAG_GOLDBLOOD	0x0800
  #define MWESM_CREAFLAG_BLOODMASK	0x0F00

/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Function Prototypes
 *
 *=========================================================================*/
  const TCHAR*	GetESMCreatureType (const int    CreaType);
  int		GetESMCreatureType (const TCHAR* pString);
/*===========================================================================
 *		End of Function Prototypes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmCreature Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmCreature : public CEsmItem1 {
  DECLARE_SUBRECCREATE();
 
  /*---------- Begin Protected Class Members --------------------*/
protected:
  CEsmSubCRDT*		m_pCreatureData;
  CEsmSubLong*		m_pFlag;
  CEsmSubAIDT*		m_pAIData;
  CEsmSubNameFix*	m_pSound;


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  CEsmCreature();
  //virtual ~CEsmCreature() { Destroy(); }
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
  virtual const TCHAR* GetItemType (void) { return _T("Creature"); }

	/* Get class members */
  aidata_t*	  GetAIData	  (void) { return (m_pAIData ? m_pAIData->GetAIData() : NULL); }
  creaturedata_t* GetCreatureData (void) { return (m_pCreatureData == NULL ? NULL          : m_pCreatureData->GetCreatureData()); }
  long            GetCreaTypeID   (void) { return (m_pCreatureData == NULL ? -1            : m_pCreatureData->GetCreaType()); }
  const TCHAR*    GetCreaType     (void) { return GetESMCreatureType(GetCreaTypeID()); }
  const TCHAR*    GetMoveType     (void);
  const TCHAR*    GetSound        (void) { return (m_pSound ? m_pSound->GetName() : _T("")); }
  long		  GetFlag	  (void) { return (m_pFlag == NULL ? 0 : m_pFlag->GetValue()); }

	/* Get creature data */
  long GetLevel		(void) { return (m_pCreatureData ? m_pCreatureData->GetLevel()		: 0); }
  long GetStrength	(void) { return (m_pCreatureData ? m_pCreatureData->GetStrength()	: 0); }
  long GetIntelligence	(void) { return (m_pCreatureData ? m_pCreatureData->GetIntelligence()	: 0); }
  long GetWillPower	(void) { return (m_pCreatureData ? m_pCreatureData->GetWillpower()	: 0); }
  long GetAgility	(void) { return (m_pCreatureData ? m_pCreatureData->GetAgility()	: 0); }
  long GetSpeed		(void) { return (m_pCreatureData ? m_pCreatureData->GetSpeed()		: 0); }
  long GetEndurance	(void) { return (m_pCreatureData ? m_pCreatureData->GetEndurance()	: 0); }
  long GetPersonality	(void) { return (m_pCreatureData ? m_pCreatureData->GetPersonality()	: 0); }
  long GetLuck		(void) { return (m_pCreatureData ? m_pCreatureData->GetLuck()		: 0); }
  long GetHealth	(void) { return (m_pCreatureData ? m_pCreatureData->GetHealth()		: 0); }
  long GetSpellPts	(void) { return (m_pCreatureData ? m_pCreatureData->GetSpellPts()	: 0); }
  long GetFatigue	(void) { return (m_pCreatureData ? m_pCreatureData->GetFatigue()	: 0); }
  long GetSoul		(void) { return (m_pCreatureData ? m_pCreatureData->GetSoul()		: 0); }
  long GetCombat	(void) { return (m_pCreatureData ? m_pCreatureData->GetCombat()		: 0); }
  long GetMagic		(void) { return (m_pCreatureData ? m_pCreatureData->GetMagic()		: 0); }
  long GetStealth	(void) { return (m_pCreatureData ? m_pCreatureData->GetStealth()	: 0); }
  long GetAttackMin1	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMin1()	: 0); }
  long GetAttackMin2	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMin2()	: 0); }
  long GetAttackMin3	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMin3()	: 0); }
  long GetAttackMax1	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMax1()	: 0); }
  long GetAttackMax2	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMax2()	: 0); }
  long GetAttackMax3	(void) { return (m_pCreatureData ? m_pCreatureData->GetAttackMax3()	: 0); }

	/* Get creature flags */
  bool	IsEssential  (void) { return ((GetFlag() & MWESM_CREAFLAG_ESSENTIAL) != 0); }
  bool	IsRespawn    (void) { return ((GetFlag() & MWESM_CREAFLAG_RESPAWN) != 0); }
  bool	IsBiped      (void) { return ((GetFlag() & MWESM_CREAFLAG_BIPED) != 0); }
  bool	IsWeapShield (void) { return ((GetFlag() & MWESM_CREAFLAG_WEAPSHIELD) != 0); }
  bool	IsSwims      (void) { return ((GetFlag() & MWESM_CREAFLAG_SWIMS) != 0); }
  bool	IsFlies      (void) { return ((GetFlag() & MWESM_CREAFLAG_FLIES) != 0); }
  bool	IsWalks      (void) { return ((GetFlag() & MWESM_CREAFLAG_WALKS) != 0); }
  bool	IsNone       (void) { return ((GetFlag() & MWESM_CREAFLAG_NONE) != 0); }
  
	/* Used to save the various record elements */
  virtual void OnAddSubRecord (CEsmSubRecord* pSubRecord);

	/* Set class members */
  void SetFlag       (const long   Value) { if (m_pFlag) m_pFlag->SetValue(Value); }
  void SetSound      (const TCHAR* pString);
  void SetCreaType   (const int    Type)  { if (m_pCreatureData) m_pCreatureData->SetCreaType(Type); }
  void SetLevel      (const int    Level) { if (m_pCreatureData) m_pCreatureData->SetLevel(Level); }
  void SetEssential  (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_ESSENTIAL, Flag); }
  void SetRespawn    (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_RESPAWN, Flag); }
  void SetBipedal    (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_BIPED, Flag); }
  void SetWeapShield (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_WEAPSHIELD, Flag); }
  void SetSwims      (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_SWIMS, Flag); }
  void SetFlies      (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_FLIES, Flag); }
  void SetWalks      (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_WALKS, Flag); }
  void SetNone       (const bool   Flag)  { if (m_pFlag) m_pFlag->SetFlag(MWESM_CREAFLAG_NONE, Flag); }
  void SetMoveType   (const TCHAR* pString);

  	/* Set a certain field of the record */
  virtual bool SetFieldValue (const int FieldID, const TCHAR* pString);

 };
/*===========================================================================
 *		End of Class CEsmCreature Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmActivator.H
 *=========================================================================*/
