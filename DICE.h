//------------------------------------------------------------------------| DICE.h                                       //
//                                                                        | DICE, Zufallswürfelzahl (deutsch)            //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_DICE_H__AD10FF97_9EB0_4AD5_8379_B3A88580504E__INCLUDED_)
#define AFX_DICE_H__AD10FF97_9EB0_4AD5_8379_B3A88580504E__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		

//----------------------------------------------------------------| klassen deklaration CDICEApp
class CDICEApp : public CWinApp
{
	public:
	CDICEApp(); //-----------------------------------------| objekt deklaration CDICEApp
	
	//{{AFX_VIRTUAL(CDICEApp)
	public:
	virtual BOOL InitInstance(); //--------------------------| ereignis deklaration
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CDICEApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
