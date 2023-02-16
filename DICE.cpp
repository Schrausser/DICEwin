//------------------------------------------------------------------------| DICE.cpp                                     //
//                                                                        | DICE, Zufallswürfelzahl (deutsch)            //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//
#include "stdafx.h"
#include "DICE.h"
#include "DICEDlg.h"
#include "time.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//------------------------------------------------------------------------| ereignis-deklaration
BEGIN_MESSAGE_MAP(CDICEApp, CWinApp)
	//{{AFX_MSG_MAP(CDICEApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

CDICEApp::CDICEApp(){}
CDICEApp theApp;

//------------------------------------------------------------------------| programmstart
BOOL CDICEApp::InitInstance()
{
	AfxEnableControlContainer();

	#ifdef _AFXDLL
	Enable3dControls();			
	#else
	Enable3dControlsStatic();	
	#endif

	     char datum[9];
	_strdate( datum ); 
	     
	     char zeit[9];
	_strtime( zeit );

	if(fopen("DICE_log.txt","a")!=0)
	{
		  FILE *log;
				log=fopen("DICE_log.txt","a");
			 
		fprintf(log,"DICE v1.0 beta 0.0.1 (C) SCHRAUSSER 2011\n");
		fprintf(log,"Log / ");
		fprintf(log,"%c%c-%c%c-20%c%c / ", datum[3], datum[4],datum[0], datum[1],datum[6], datum[7]);
		fprintf(log,"%c%c:%c%c:%c%c \n\n", zeit[0], zeit[1],zeit[3], zeit[4],zeit[6], zeit[7]);
			 

		fclose(log);
	}

	     CDICEDlg dlg;
	  m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	
	if      (nResponse == IDOK){}
	else if (nResponse == IDCANCEL){}

	return 0;
}

//------------------------------------------------------------------------| programmende
int CDICEApp::ExitInstance() 
{
	if(fopen("DICE_log.txt","a")!=0)
	{
		  FILE *log;
				log=fopen("DICE_log.txt","a");
		fprintf(log,"\n\n");
		 fclose(log);
	}
	
	return CWinApp::ExitInstance();
}
