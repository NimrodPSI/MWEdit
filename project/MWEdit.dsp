# Microsoft Developer Studio Project File - Name="MWEdit" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=MWEdit - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "MWEdit.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "MWEdit.mak" CFG="MWEdit - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "MWEdit - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "MWEdit - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "MWEdit - Win32 Release"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\common\\" /I "..\esm" /I ".\\" /I "..\\" /I "..\IL" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /D "NODEVILLIB" /FR /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x1009 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x1009 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "MWEdit - Win32 Debug"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\common\\" /I "..\esm" /I ".\\" /I "..\\" /I "..\IL" /D "_DEBUG" /D "WIN32" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /D "NODEVILLIB" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x1009 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "MWEdit - Win32 Release"
# Name "MWEdit - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Group "Forms"

# PROP Default_Filter ""
# Begin Group "Record"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ActivatorDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmAiActivateDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmAiEscortDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmAiTravelDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmAiWanderDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmAlchemyDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmApparatusDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmArmorDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmBirthSignDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmBodyPartDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmBookDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmClassDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmClothingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmContainDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmDialogDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmDoorDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmEffectDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmEnchantDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmFactionDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmGlobalDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmInfoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmIngrediantDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmJournalDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmLevelCreaDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmLevelItemDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmLightDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmLockPickDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmMiscDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmProbeDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmRaceDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmRegionDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmRepairDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSettingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSkillDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSoundDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSoundGenDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSpellDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmStartScriptDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmStaticDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmWeaponDlg.cpp
# End Source File
# End Group
# Begin Group "Creature"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\CreaturePage1.cpp
# End Source File
# Begin Source File

SOURCE=.\CreaturePage2.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreatureDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage1.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage2.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage3.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage4.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage5.cpp
# End Source File
# End Group
# Begin Group "Cell"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmCellDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmCellRefDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmExtCellPage.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmIntCellPage.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmRefCellPage.cpp
# End Source File
# End Group
# Begin Group "Script"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ChildFrmScript.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmFuncHelpView.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScriptDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ScriptErrorDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ScriptErrorView.cpp
# End Source File
# End Group
# Begin Group "NPC"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmNpcDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage1.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage2.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage3.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage4.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage5.cpp
# End Source File
# End Group
# Begin Group "Base"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmDlgArray.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmRecDialog.cpp
# End Source File
# End Group
# Begin Group "Child"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ChildFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\ChildFrmFix.cpp
# End Source File
# Begin Source File

SOURCE=.\ChildFrmVar.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# End Group
# Begin Group "General"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ColorStatic1.cpp
# End Source File
# Begin Source File

SOURCE=.\CustRichEdit.cpp
# End Source File
# Begin Source File

SOURCE=.\editundo.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmIconFrame.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmListCtrl.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmSubListCtrl.cpp
# End Source File
# Begin Source File

SOURCE=.\InputDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\splitterwnd.cpp
# End Source File
# End Group
# Begin Group "ScriptTemplate"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmScrTempPage1.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempPage2.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempPage3.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempView.cpp
# End Source File
# Begin Source File

SOURCE=.\ScriptTemplate.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# End Group
# Begin Source File

SOURCE=.\EsmCsvImportDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmFindDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmHeaderDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmLoadDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmOptionsDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScriptCompareDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmUsesDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\MWEditView.cpp
# End Source File
# Begin Source File

SOURCE=.\OpenPluginDlg.cpp
# End Source File
# End Group
# Begin Group "Misc"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\MWEdit.rc
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Common"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\File\csvfile.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_base.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_block.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_chr.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_err.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_file.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_log.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_math.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_mem.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_str.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\dl_time.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Windows\dl_ToolTip.cpp
# End Source File
# Begin Source File

SOURCE=.\ErrorDialog.cpp
# End Source File
# Begin Source File

SOURCE=..\Common\File\genfile.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\File\genfind.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\GenStack.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\mwcommon.cpp
# ADD CPP /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\Utility\namelist.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\ptrarray.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\String\SString.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Windows\TabCtrlSheet.cpp
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\temarray.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Common\tstfile.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Windows\WinUtil.cpp
# End Source File
# End Group
# Begin Group "ESM"

# PROP Default_Filter ""
# Begin Group "Records"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\esm\EsmActivator.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmAlchemy.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmApparatus.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmArmor.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBirthSign.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBodyPart.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBook.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmCell.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmClass.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmClothing.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmContainer.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmCreature.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmDialogue.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmDoor.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmEnchant.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmFaction.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmGameSetting.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmGlobal.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmInfo.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmIngrediant.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem1.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem2.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem3.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLand.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLevelCrea.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLevelItem.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLight.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLockPick.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmMagicEffect.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmMisc.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmNpc.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmProbe.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRace.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRecord.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRegion.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRepair.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmScript.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSkill.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSound.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSoundGen.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSpell.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmStartScript.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmStatic.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmTES3.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmWeapon.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# End Group
# Begin Group "SubRecords"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\esm\EsmSubBase.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCellRef.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubName.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSCVR.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# End Group
# Begin Group "Script1"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmScrFuncArray.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScrFuncData.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScriptCompile.cpp
# ADD CPP /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScriptCompileEx.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmScriptDefs.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScriptError.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScriptFuncs.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmScriptOptions.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\mwcustomfunc.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# End Group
# Begin Source File

SOURCE=..\esm\EsmBase.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmCsvDefs.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\esm\EsmFile.cpp
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmGlobOptions.cpp
# End Source File
# Begin Source File

SOURCE=.\EsmOptions.cpp
# ADD CPP /Yu
# End Source File
# Begin Source File

SOURCE=.\EsmUtils.cpp
# End Source File
# End Group
# Begin Source File

SOURCE=.\MWEdit.cpp
# End Source File
# Begin Source File

SOURCE=.\MWEditDoc.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Group "Forms."

# PROP Default_Filter ""
# Begin Group "Record."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ActivatorDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmAiActivateDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmAiEscortDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmAiTravelDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmAiWanderDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmAlchemyDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmApparatusDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmArmorDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmBirthSignDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmBodyPartDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmBookDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmClassDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmClothingDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmContainDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmDialogDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmDoorDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmEffectDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmEnchantDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmFactionDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmGlobalDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmInfoDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmIngrediantDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmJournalDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmLevelCreaDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmLevelItemDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmLightDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmLockPickDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmMiscDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmProbeDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmRaceDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmRegionDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmRepairDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmSettingDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmSkillDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmSoundDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmSoundGenDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmSpellDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmStartScriptDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmStaticDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmWeaponDlg.h
# End Source File
# End Group
# Begin Group "Creature."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\CreaturePage1.h
# End Source File
# Begin Source File

SOURCE=.\CreaturePage2.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreatureDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage1.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage2.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage3.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage4.h
# End Source File
# Begin Source File

SOURCE=.\EsmCreaturePage5.h
# End Source File
# End Group
# Begin Group "Cell."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmCellDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmCellRefDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmExtCellPage.h
# End Source File
# Begin Source File

SOURCE=.\EsmIntCellPage.h
# End Source File
# Begin Source File

SOURCE=.\EsmRefCellPage.h
# End Source File
# End Group
# Begin Group "Script."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ChildFrmScript.h
# End Source File
# Begin Source File

SOURCE=.\EsmFuncHelpView.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptDlg.h
# End Source File
# Begin Source File

SOURCE=.\ScriptErrorDlg.h
# End Source File
# Begin Source File

SOURCE=.\ScriptErrorView.h
# End Source File
# End Group
# Begin Group "NPC."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmNpcDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage1.h
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage2.h
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage3.h
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage4.h
# End Source File
# Begin Source File

SOURCE=.\EsmNpcPage5.h
# End Source File
# End Group
# Begin Group "Base."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmDlgArray.h
# End Source File
# Begin Source File

SOURCE=.\EsmRecDialog.h
# End Source File
# End Group
# Begin Group "General."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ColorStatic1.h
# End Source File
# Begin Source File

SOURCE=.\CustRichEdit.h
# End Source File
# Begin Source File

SOURCE=.\EsmIconFrame.h
# End Source File
# Begin Source File

SOURCE=.\EsmListCtrl.h
# End Source File
# Begin Source File

SOURCE=.\EsmSubListCtrl.h
# End Source File
# Begin Source File

SOURCE=.\InputDialog.h
# End Source File
# Begin Source File

SOURCE=.\splitterwnd.h
# End Source File
# End Group
# Begin Group "Child."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\ChildFrmFix.h
# End Source File
# Begin Source File

SOURCE=.\ChildFrmVar.h
# End Source File
# End Group
# Begin Group "ScriptTemplate."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmScrTempPage1.h
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempPage2.h
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempPage3.h
# End Source File
# Begin Source File

SOURCE=.\EsmScrTempView.h
# End Source File
# Begin Source File

SOURCE=.\ScriptTemplate.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\EsmCsvImportDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmFindDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmHeaderDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmLoadDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmOptionsDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptCompareDlg.h
# End Source File
# Begin Source File

SOURCE=.\EsmUsesDlg.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\MWEditView.h
# End Source File
# Begin Source File

SOURCE=.\OpenPluginDlg.h
# End Source File
# End Group
# Begin Group "Misc."

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\Common\Contain\GenStack.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\resource.hm
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Common."

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\File\csvfile.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_base.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_block.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_chr.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_err.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_file.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_log.h
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\dl_map.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_math.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_mem.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_str.h
# End Source File
# Begin Source File

SOURCE=..\Common\dl_time.h
# End Source File
# Begin Source File

SOURCE=..\Windows\dl_ToolTip.h
# End Source File
# Begin Source File

SOURCE=..\Common\File\genfile.h
# End Source File
# Begin Source File

SOURCE=..\Common\File\genfind.h
# End Source File
# Begin Source File

SOURCE=..\mwcommon.h
# End Source File
# Begin Source File

SOURCE=..\Common\Utility\namelist.h
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\ptrarray.h
# End Source File
# Begin Source File

SOURCE=..\Common\String\sstring.h
# End Source File
# Begin Source File

SOURCE=..\Windows\TabCtrlSheet.h
# End Source File
# Begin Source File

SOURCE=..\Common\Contain\temarray.h
# End Source File
# Begin Source File

SOURCE=..\Windows\winutil.h
# End Source File
# End Group
# Begin Group "ESM."

# PROP Default_Filter ""
# Begin Group "Records."

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\esm\EsmActivator.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmAlchemy.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmApparatus.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmArmor.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBirthSign.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBodyPart.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmBook.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmCell.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmClass.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmClothing.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmContainer.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmCreature.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmDialogue.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmDoor.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmEnchant.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmFaction.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmGameSetting.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmGlobal.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmInfo.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmIngrediant.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem1.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem2.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmItem3.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLand.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLevelCrea.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLevelItem.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLight.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmLockPick.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmMagicEffect.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmMisc.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmNpc.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmProbe.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRace.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRecord.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRegion.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmRepair.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmScript.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSkill.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSound.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSoundGen.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSpell.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmStartScript.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmStatic.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmTES3.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmWeapon.h
# End Source File
# End Group
# Begin Group "SubRecords."

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\esm\EsmSubAADT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAI_A.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAI_E.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAI_F.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAI_T.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAI_W.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAIDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubALDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAMBI.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubAODT.h
# End Source File
# Begin Source File

SOURCE=..\esm\ESMSubBase.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubBKDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubBYDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubByte.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCellDATA.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCellRef.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCLDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCNDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCRDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubCTDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubDATA.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubENAM.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubENDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubFADT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubFloat.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubFRMR.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubHEDR.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubInfoDATA.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubIRDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubLHDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubLKDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubLong.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubLong64.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubMCDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubMEDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubName.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubName32.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubName512.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubNameFix.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubNPCO.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubNPCS.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubNPDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubPBDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubPos6.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubRADT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubRIDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSCHD.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSCVR.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubShort.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSKDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSNAM.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubSPDT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubWEAT.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmSubWPDT.h
# End Source File
# End Group
# Begin Group "Script1."

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\EsmScrFuncArray.h
# End Source File
# Begin Source File

SOURCE=.\EsmScrFuncData.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptCompile.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptDefs.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptError.h
# End Source File
# Begin Source File

SOURCE=.\EsmScriptOptions.h
# End Source File
# Begin Source File

SOURCE=.\mwcustomfunc.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\EsmCsvDefs.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmDefs.h
# End Source File
# Begin Source File

SOURCE=..\esm\EsmFile.h
# End Source File
# Begin Source File

SOURCE=.\EsmGlobOptions.h
# End Source File
# Begin Source File

SOURCE=.\EsmOptions.h
# End Source File
# Begin Source File

SOURCE=.\EsmOptionsDef.h
# End Source File
# Begin Source File

SOURCE=.\EsmRegDefs.h
# End Source File
# Begin Source File

SOURCE=.\EsmUtils.h
# End Source File
# Begin Source File

SOURCE=.\mwrecordmap.h
# End Source File
# End Group
# Begin Group "Devil."

# PROP Default_Filter ""
# Begin Source File

SOURCE=...\IL\include\IL\config.h
# End Source File
# Begin Source File

SOURCE=...\IL\include\IL\il.h
# End Source File
# Begin Source File

SOURCE=...\IL\include\IL\ilu.h
# End Source File
# Begin Source File

SOURCE=...\IL\include\IL\ilut.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\MWEdit.h
# End Source File
# Begin Source File

SOURCE=.\MWEditDoc.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\activato.bmp
# End Source File
# Begin Source File

SOURCE=.\res\activato.ico
# End Source File
# Begin Source File

SOURCE=.\res\alchemy.bmp
# End Source File
# Begin Source File

SOURCE=.\res\alchemy.ico
# End Source File
# Begin Source File

SOURCE=.\res\apparatu.ico
# End Source File
# Begin Source File

SOURCE=.\res\armor.ico
# End Source File
# Begin Source File

SOURCE=.\res\armor1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\birthsig.bmp
# End Source File
# Begin Source File

SOURCE=.\res\birthsig.ico
# End Source File
# Begin Source File

SOURCE=.\res\bitmap1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bluebmp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00001.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00002.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00003.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00004.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00005.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00006.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bodypart.ico
# End Source File
# Begin Source File

SOURCE=.\res\book.ico
# End Source File
# Begin Source File

SOURCE=.\res\cell.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cell.ico
# End Source File
# Begin Source File

SOURCE=.\res\class.bmp
# End Source File
# Begin Source File

SOURCE=.\res\class.ico
# End Source File
# Begin Source File

SOURCE=.\res\clothing.bmp
# End Source File
# Begin Source File

SOURCE=.\res\clothing.ico
# End Source File
# Begin Source File

SOURCE=.\res\compileb.bmp
# End Source File
# Begin Source File

SOURCE=.\res\containe.bmp
# End Source File
# Begin Source File

SOURCE=.\res\containe.ico
# End Source File
# Begin Source File

SOURCE=.\res\copybmp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\creature.ico
# End Source File
# Begin Source File

SOURCE=.\res\cursor1.cur
# End Source File
# Begin Source File

SOURCE=.\res\cutbmp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\dialog.bmp
# End Source File
# Begin Source File

SOURCE=.\res\dialog.ico
# End Source File
# Begin Source File

SOURCE=.\res\door.bmp
# End Source File
# Begin Source File

SOURCE=.\res\door.ico
# End Source File
# Begin Source File

SOURCE=.\res\door1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\dropbad.bmp
# End Source File
# Begin Source File

SOURCE=.\res\effect.ico
# End Source File
# Begin Source File

SOURCE=.\res\effect1.ico
# End Source File
# Begin Source File

SOURCE=.\res\enchant.ico
# End Source File
# Begin Source File

SOURCE=.\res\faction.bmp
# End Source File
# Begin Source File

SOURCE=.\res\find_dia.bmp
# End Source File
# Begin Source File

SOURCE=.\res\find_dia.ico
# End Source File
# Begin Source File

SOURCE=.\res\findbmp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\funchelp.ico
# End Source File
# Begin Source File

SOURCE=.\res\gamesett.bmp
# End Source File
# Begin Source File

SOURCE=.\res\global.bmp
# End Source File
# Begin Source File

SOURCE=.\res\global.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00001.ico
# End Source File
# Begin Source File

SOURCE=.\res\ingredia.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ingredia.ico
# End Source File
# Begin Source File

SOURCE=.\res\levelcre.ico
# End Source File
# Begin Source File

SOURCE=.\res\levelite.bmp
# End Source File
# Begin Source File

SOURCE=.\res\levelite.ico
# End Source File
# Begin Source File

SOURCE=.\res\light.bmp
# End Source File
# Begin Source File

SOURCE=.\res\light.ico
# End Source File
# Begin Source File

SOURCE=.\res\light1.ico
# End Source File
# Begin Source File

SOURCE=.\res\lockpick.bmp
# End Source File
# Begin Source File

SOURCE=.\res\lockpick.ico
# End Source File
# Begin Source File

SOURCE=.\res\magiceff.bmp
# End Source File
# Begin Source File

SOURCE=.\res\misc.bmp
# End Source File
# Begin Source File

SOURCE=.\res\misc.ico
# End Source File
# Begin Source File

SOURCE=.\res\MWEdit.ico
# End Source File
# Begin Source File

SOURCE=.\res\MWEdit.rc2
# End Source File
# Begin Source File

SOURCE=.\res\MWEditDoc.ico
# End Source File
# Begin Source File

SOURCE=.\nodrop.cur
# End Source File
# Begin Source File

SOURCE=.\res\npc.bmp
# End Source File
# Begin Source File

SOURCE=.\res\npc.ico
# End Source File
# Begin Source File

SOURCE=.\res\pastebmp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\probe.bmp
# End Source File
# Begin Source File

SOURCE=.\res\probe.ico
# End Source File
# Begin Source File

SOURCE=.\res\race.bmp
# End Source File
# Begin Source File

SOURCE=.\res\race.ico
# End Source File
# Begin Source File

SOURCE=.\res\region.bmp
# End Source File
# Begin Source File

SOURCE=.\res\region.ico
# End Source File
# Begin Source File

SOURCE=.\res\repair.bmp
# End Source File
# Begin Source File

SOURCE=.\res\repair.ico
# End Source File
# Begin Source File

SOURCE=.\res\replaceb.bmp
# End Source File
# Begin Source File

SOURCE=.\res\script.bmp
# End Source File
# Begin Source File

SOURCE=.\res\script1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\script1.ico
# End Source File
# Begin Source File

SOURCE=.\res\setting.ico
# End Source File
# Begin Source File

SOURCE=.\res\skill.bmp
# End Source File
# Begin Source File

SOURCE=.\res\skill.ico
# End Source File
# Begin Source File

SOURCE=.\res\skill1.ico
# End Source File
# Begin Source File

SOURCE=.\res\sound.bmp
# End Source File
# Begin Source File

SOURCE=.\res\sound.ico
# End Source File
# Begin Source File

SOURCE=.\res\sound1.ico
# End Source File
# Begin Source File

SOURCE=.\res\soundgen.bmp
# End Source File
# Begin Source File

SOURCE=.\res\spell.bmp
# End Source File
# Begin Source File

SOURCE=.\res\static.bmp
# End Source File
# Begin Source File

SOURCE=.\res\static.ico
# End Source File
# Begin Source File

SOURCE=.\res\testbitm.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\res\uses_dia.ico
# End Source File
# Begin Source File

SOURCE=.\res\weapon.bmp
# End Source File
# Begin Source File

SOURCE=.\res\weapon.ico
# End Source File
# Begin Source File

SOURCE=.\res\whitebmp.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\customfunctions.dat
# End Source File
# Begin Source File

SOURCE=.\Functions.dat
# End Source File
# Begin Source File

SOURCE=.\MWEdit.reg
# End Source File
# End Target
# End Project
