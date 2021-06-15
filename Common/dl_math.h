/*===========================================================================
 *
 * File:	DL_Math.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	Tuesday, May 08, 2001
 *
 * Contains math related definitions for Dave's Library of common code.
 *
 * 18 September 2003
 *	- Added the FIX_RANGE() and exp2() macros.
 *
 *=========================================================================*/
#ifndef __DL_MATH_H
#define __DL_MATH_H


/*===========================================================================
 *
 * Begin Required Include Files
 *
 *=========================================================================*/
  #include "dl_base.h"
  #include "dl_err.h"
  #include <ctype.h>
  #include "math.h"

  #if defined(__TURBOC__) && !defined(__WIN32_CE)
    #include <values.h>
    #include <float.h>
  #endif
/*===========================================================================
 *		End of Required Include Files
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Exponential of power of 10s macro */
  #define exp10(Value) (exp(Value * M_LN10))
  #define exp2(Value)  (exp(Value * M_LN2))
  #define pow10(Value) (pow(10, (Value)))
  #define pow2l(Value) ((long)(1l << (Value)))
  #define log2(Value)  (log(Value) / M_LN2)

	/* Float min/max definitions for TurboC */
  #if defined(__TURBOC__) && !defined(FLT_MAX)
    #define FLT_MAX MAXFLOAT
    #define FLT_MIN MINFLOAT
  #endif

  	/* Fixes the given value to >= Min and <= Max */
  #define FIX_RANGE(Value, Min, Max) if ((Value) > (Max)) (Value) = (Max); else if ((Value) < (Min)) (Value) = (Min);

/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Type Definitions
 *
 *=========================================================================*/

	/* Used to hold information about numeric unit prefixes */
  typedef struct {
    int  LogBase10;
    byte PrefixChar;
    TCHAR Prefix[8];
   } unit_prefix_t;

/*===========================================================================
 *		End of Type Definitions
 *=========================================================================*/



/*===========================================================================
 *
 * Begin Inline Sign Functions
 *
 * Function which return -1/0/1 depending on the sign of the number.
 *
 *=========================================================================*/
  inline int sign (const int Number) {
    if (Number == 0) return (0);
    if (Number > 0)  return (1);
    return (-1);
   }

  inline long sign (const long Number) {
    if (Number == 0) return (0);
    if (Number > 0)  return (1);
    return (-1);
   }

  inline float sign (const float Number) {
    if (Number == 0) return (0.0);
    if (Number > 0)  return (1.0);
    return (-1.0);
   }

  inline double sign (const double Number) {
    if (Number == 0) return (0.0);
    if (Number > 0)  return (1.0);
    return (-1.0);
   }
/*===========================================================================
 *		End of Inline Sign Functions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Simple Conversion Macros
 *
 *=========================================================================*/

	/* Degree conversion macros */
  #define CONVERT_RAD2DEG(Radians) (Radians * M_RAD2DEG)
  #define CONVERT_DEG2RAD(Degrees) (Degrees * M_DEG2RAD)

/*===========================================================================
 *		End of Simple Conversion Macros
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Function Prototypes
 *
 *=========================================================================*/

	/* Convert a hexadecimal character to a 0-15 integer value */
  int HexCharToInt (const TCHAR Character);

  	/* Compute a nice tick length for graphs */
  double GetNiceTickLength  (double& AxisStart, double& AxisEnd, const int NumTicks);
  double GetNiceTickLengthC (const double AxisStart, const double AxisEnd, const int NumTicks);


	/* Get the best unit prefix for the value */
  unit_prefix_t* GetUnitPrefix (boolean& OverFlow, const double Value);

	/* Converts a metric value a string in the best representation */
  TCHAR* Metricize (const double Value, const TCHAR* pUnits);
  TCHAR* Metricize (TCHAR* Buffer, const int BufferSize, const double Value, const TCHAR* pUnits);

	/* Converts the input Value to a 'Nice' number */
  double NiceNumber (const double Value, const int Round);

	/* Returns a random number from 0 to ULONG_MAX */
  ulong Random (void);

	/* Generate a range of random integers */
  int   Random (const int   MaxNumber);
  ulong Random (const ulong MaxNumber);
  int   Random (const int   MinNumber, const int MaxNumber);
  
	/* Seeds the random number generator with the current time */
  void RandomizeTimer (void);

	/* Seeds the custom random number generator */
  void SeedRandom (const ulong NewSeed = 1);

/*===========================================================================
 *		End of Function Prototypes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Test Function Prototypes
 *
 *=========================================================================*/
#if defined(_DEBUG)

  void Test_Random  (const size_t NumTests = 1000);
  void Test_Random1 (const size_t NumTests = 1000);
  void Test_Random2 (const size_t NumTests = 1000);
  void Test_RandomRate (const size_t NumTests = 100);
  void Test_sign (void);
  void Test_HexCharToInt (void);
  void Test_Metricize (void);
  void Test_DL_Math (void);

#endif
/*===========================================================================
 *		End of Test Function Prototypes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Global Variable Definitions
 *
 *=========================================================================*/
  extern char HexCharValues[];
/*===========================================================================
 *		End of Global Variable Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Inline Function Definitions
 *
 *=========================================================================*/

	/* Convert an ASCII character to hexadecimal value (0-15) */
inline int HexCharToInt (const TCHAR Character) {
  IASSERT(isxdigit(Character));
  return (int) HexCharValues[Character & 0x7F];
 }

/*===========================================================================
 *		End of Inline Function Definitions
 *=========================================================================*/


#endif
/*===========================================================================
 *		End of File Dl_math.H
 *=========================================================================*/
