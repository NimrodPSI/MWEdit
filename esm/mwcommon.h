/*===========================================================================
 *
 * File:	Mwcommon.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	December 29, 2003
 *
 * Contains common definitions/prototypes for Morrowind projects.
 *
 *=========================================================================*/
#ifndef __MWCOMMON_H
#define __MWCOMMON_H


/*===========================================================================
 *
 * Begin Required Includes
 *
 *=========================================================================*/
  #include "dl_err.h"
/*===========================================================================
 *		End of Required Includes
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Morrowind registries */
  #define MWESM_REG_INSTALLPATH _T("SOFTWARE\\Bethesda Softworks\\Morrowind\\Installed Path")
  #define MWESM_REG_PATH	_T("SOFTWARE\\Bethesda Softworks\\Morrowind")

/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Function Prototypes
 *
 *=========================================================================*/

	/* Access Morrowind related absolute paths */
  const TCHAR* GetMWInstallPath  (void);
  const TCHAR* GetMWDataFilePath (void);
  const TCHAR* GetMWTexturesPath (void);
  
/*===========================================================================
 *		End of Function Prototypes
 *=========================================================================*/



#endif
/*===========================================================================
 *		End of File Mwcommon.H
 *=========================================================================*/
