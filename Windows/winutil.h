/*===========================================================================
 *
 * File:	Winutil.H
 * Author:	Dave Humphrey (uesp@m0use.net)
 * Created On:	Wednesday, May 08, 2002
 *
 * Description
 *
 *=========================================================================*/
#ifndef __WINUTIL_H
#define __WINUTIL_H


/*===========================================================================
 *
 * Begin Required Include Files
 *
 *=========================================================================*/
#if defined(UNDER_CE)
  #include "dl_wince.h"
#else
  #include "dl_err.h"
#endif
/*===========================================================================
 *		End of Required Include Files
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions
 *
 *=========================================================================*/

	/* Options for the MakeTimeString() function, bit field values */
  #define TIMESTRING_SHORTTIME 1
  #define TIMESTRING_LONGTIME  2
  #define TIMESTRING_SHORTDATE 4
  #define TIMESTRING_LONGDATE  8

	/* Shortcut to access the selected list item data */
  #define GETLISTDATA(List, Var) if (List.GetCurSel() >= 0) Var = List.GetItemData(List.GetCurSel());
 
	/* Shortcuts to font creation */
  #define CFONT_CREATE(Font, Size, Bold, Italic, FontName) Font.CreateFont(Size, 0, 0, 0, Bold, Italic, 0, 0, \
			DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH, FontName);

/*===========================================================================
 *		End of Definitions
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Definitions when using Borland C
 *
 *=========================================================================*/
#if defined(__BORLANDC__)
  #define CComboBox	TComboBox
  #define CListBox	TListBox
  #define CDC		TDC
  #define CPen		TPen
  #define CFont		TFont
  #define CBrush	TBrush
  #define CPaintDC	TPaintDC
  #define CWnd		TWindow
  //#define RECT		TRect
  #define CRect		TRect
  #define CPoint	TPoint
  #define CSize		TSize


  #define afx_msg
  #define DECLARE_MESSAGE_MAP() 
#endif
/*===========================================================================
 *		End of Definitions when using Borland C
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Function Prototypes
 *
 *=========================================================================*/

	/* Adds a string data value pair to a combo or list box */
  bool AddComboString (CComboBox& ComboBox, const TCHAR* pString, const int Data);
  bool AddListString  (CListBox& ListBox,   const TCHAR* pString, const int Data);
 
	/* Display a browse folder dialog */
  bool BrowseForFolder (TCHAR*   pPath, HWND hWnd, const TCHAR* pTitle);
  bool BrowseForFolder (CString&  Path, HWND hWnd, const TCHAR* pTitle);

  	/* Clipboard functions */
  bool CopyTextToClipboard (const TCHAR* pString, const int Length);

	/* Creates a new shortcut */
  bool CreateShortcut (LPTSTR lpszPathObj, LPTSTR pWorkingPath, LPTSTR pArgs, LPTSTR pIconPath, 
			LPTSTR lpszPathLink, LPTSTR lpszDesc);

	/* Find a tree control item */
  HTREEITEM FindTreeItem (const char* pName, CTreeCtrl& TreeCtrl, HTREEITEM Root);

	/* Find a window based on its instance handle */
  HWND FindWindowHandle (HINSTANCE hInstance);

	/* Get the item data from the currently selected list item, if any */
  bool GetCurSelListItemData  (long& Data, CListBox&  ListBox);
  bool GetCurSelComboItemData (long& Data, CComboBox& ComboBox);

	/* Attempt to open a web page */
  HINSTANCE OpenWebPage (const TCHAR* pSiteAddress);

	/* Execute a simple DOS command */
  int RunDOSCommand (const TCHAR* pFilename);
	
	/* String conversion functions */
  bool StringToInteger (const TCHAR* pString, int&   DestValue);
  bool StringToFloat   (const TCHAR* pString, float& DestValue);
  bool StringToBool    (const TCHAR* pString, bool&  DestValue);

	/* Trim whitespace from a string object */
  inline CString& TrimStringSpace (CString& String) { String.TrimRight(_T(" \n\r\t")); String.TrimLeft(_T(" \n\r\t")); return (String); }

	/* Find an item in a combobox/listbox based on its item data */
  int FindComboListItem (CComboBox& ComboBox, const DWORD ItemData, const bool Select = false);
  int FindListItem      (CListBox& ListBox,   const DWORD ItemData, const bool Select = false);

	/* Get the currently active view/document */
#if !defined(UNDER_CE) && !defined(__BORLANDC__)

	/* Clipboard functions */
  bool ClipCopyFromWnd (CWnd* pWnd);
  bool ClipCutFromWnd  (CWnd* pWnd);
  bool ClipPasteToWnd  (CWnd* pWnd);

  	/* CString clipboard versions */
  inline bool CopyTextToClipboard (CString& String) { return CopyTextToClipboard(String, String.GetLength()); }
         bool GetClipboardText    (CString& Buffer);

  CDocument* GetActiveDocument      (void);
  CView*     GetActiveView          (void);
  CDocument* GetActiveFrameDocument (CFrameWnd* pFrame);
  CView*     GetActiveFrameView     (CFrameWnd* pFrame);

	/* Attempt to find a currently open view */
  CView* GetView (const CRuntimeClass* pRunTimeClass);

	/* Create a time/date string */
  void MakeTimeString (CString& Buffer, const int Options);

	/* Path functions for string objects */
  CString& ExtractPath (CString& PathBuffer, const TCHAR* pPath);
  CString& TerminatePathString (CString& PathBuffer);

	/* Parse a word from a character buffer */
  bool GetStringWord (CString& OutputString, const TCHAR* pBuffer, int& StartPos);

	/* Open a context menu */
  bool OpenContextMenu (CWnd* pParent, CWnd* pWnd, CPoint Point, const DWORD MenuResource);

#endif
 
	/* Set the internal window text directly */
  void WINAPI SetInternalWindowText (HWND hwnd, LPCTSTR lpText);

/*===========================================================================
 *		End of Function Prototypes
 *=========================================================================*/

#endif
/*===========================================================================
 *		End of File Winutil.H
 *=========================================================================*/

