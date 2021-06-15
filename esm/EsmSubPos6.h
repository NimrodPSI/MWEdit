/*===========================================================================
 *
 * File:	EsmsubPos6.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	February 3, 2003
 *
 * Description
 *
 *=========================================================================*/
#ifndef __ESMSUBPOS6_H
#define __ESMSUBPOS6_H


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
	float	PosX;
	float	PosY;
	float	PosZ;
	float	RotX;
	float	RotY;
	float	RotZ;	
  } pos6data_t;

#pragma pack(pop)
/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Class CEsmSubPos6 Definition
 *
 * Description
 *
 *=========================================================================*/
class CEsmSubPos6 : public CEsmSubRecord {

  /*---------- Begin Protected Class Members --------------------*/
protected:


  /*---------- Begin Protected Class Methods --------------------*/
protected:


  /*---------- Begin Public Class Methods -----------------------*/
public:

	/* Class Constructors/Destructors */
  //CEsmSubPos6();
  //virtual ~CEsmSubPos6() { Destroy(); }
  //virtual void Destroy (void);

	/* Create a name object */
  static CEsmSubRecord* Create (void) {
	CEsmSubRecord* pSubRecord;
	CreatePointerL(pSubRecord, CEsmSubPos6);
	return (pSubRecord);
   }

	/* Create a new sub-record */
  virtual void CreateNew (void) { 
	CEsmSubRecord::CreateNew();
	CreateArrayPointerL(m_pData, byte, sizeof(pos6data_t)); 
	m_RecordSize = sizeof(pos6data_t); 
	memset(m_pData, 0, sizeof(pos6data_t));
   }

     	/* Finds text in the sub-record */
  virtual bool Find (esmfind_t& FindData) { return (false); }

	/* Get class members */
  pos6data_t*	GetPosData (void) { return ((pos6data_t *) m_pData); }
  float		GetPosX    (void) { return (GetPosData()->PosX); }
  float		GetPosY    (void) { return (GetPosData()->PosY); }
  float		GetPosZ    (void) { return (GetPosData()->PosZ); }
  float		GetRotX    (void) { return (GetPosData()->RotX); }
  float		GetRotY    (void) { return (GetPosData()->RotY); }
  float		GetRotZ    (void) { return (GetPosData()->RotZ); }

	/* Set class members */
  void SetPosX (const float Value) { GetPosData()->PosX = Value; }
  void SetPosY (const float Value) { GetPosData()->PosY = Value; }
  void SetPosZ (const float Value) { GetPosData()->PosZ = Value; }
  void SetRotX (const float Value) { GetPosData()->RotX = Value; }
  void SetRotY (const float Value) { GetPosData()->RotY = Value; }
  void SetRotZ (const float Value) { GetPosData()->RotZ = Value; }
  void SetPos  (const float X, const float Y, const float Z) { SetPosX(X); SetPosY(Y); SetPosZ(Z); }
  void SetRot  (const float X, const float Y, const float Z) { SetRotX(X); SetRotY(Y); SetRotZ(Z); }
  
 };
/*===========================================================================
 *		End of Class CEsmSubPos6 Definition
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File EsmsubRIDT.H
 *=========================================================================*/
