//------------------------------------------------------------------------| DICEeinst.cpp                                  //
//                                                                        | DICE, Zufallswürfelzahl (deutsch)            //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//
#include "stdafx.h"
#include "process.h"
#include "dice.h"
#include "DICEeinst.h"
#include "DICEDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//--------------------------------------------------------| variableninitialisierung DICEeinst
DICEeinst::DICEeinst(CWnd* pParent )
	: CDialog(DICEeinst::IDD, pParent)
{
	//{{AFX_DATA_INIT(DICEeinst)
	m_vms = 100;
	m_ch_N = 0;
	m_ch_R = 1;
	m_ch_log = 1;
	m_log = "EIN";
	m_dt_fhg = "8421504";
	m_dt_fwl = "0";
	m_dt_fzl = "16777215";
	m_dt_fag = "16777215";
	m_ons = 300;
	m_wfl = 10;
	//}}AFX_DATA_INIT
}

//--------------------------------------------------------| steuerelement-initialisierung DICEeinst
void DICEeinst::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DICEeinst)
	DDX_Text(pDX, IDC_EDIT_ms, m_vms);
	DDX_Check(pDX, IDC_CHECK_N, m_ch_N);
	DDX_Check(pDX, IDC_CHECK_R, m_ch_R);
	DDX_Check(pDX, IDC_CHECK_log, m_ch_log);
	DDX_Text(pDX, IDC_EDIT_log, m_log);
	DDX_CBString(pDX, IDC_COMBO_fhg, m_dt_fhg);
	DDX_CBString(pDX, IDC_COMBO_fwl, m_dt_fwl);
	DDX_CBString(pDX, IDC_COMBO_fzl, m_dt_fzl);
	DDX_CBString(pDX, IDC_COMBO_fag, m_dt_fag);
	DDX_Text(pDX, IDC_EDIT_ons, m_ons);
	DDX_Text(pDX, IDC_EDIT_wfl, m_wfl);
	//}}AFX_DATA_MAP
}

//--------------------------------------------------------| ereignis-deklaration DICEeinst
BEGIN_MESSAGE_MAP(DICEeinst, CDialog)
	//{{AFX_MSG_MAP(DICEeinst)
	ON_BN_CLICKED(IDC_CHECK_N, OnCheckN)
	ON_BN_CLICKED(IDC_CHECK_R, OnCheckR)
	ON_BN_CLICKED(IDC_CHECK_log, OnCHECKlog)
	ON_BN_CLICKED(IDC_Log_ed, OnLoged)
	ON_BN_CLICKED(IDC_BUTTON_reset, OnBUTTONreset)
	ON_WM_PAINT()
	ON_CBN_SELCHANGE(IDC_COMBO_fhg, OnSelchangeCOMBOfhg)
	ON_CBN_SELCHANGE(IDC_COMBO_fwl, OnSelchangeCOMBOfwl)
	ON_CBN_SELCHANGE(IDC_COMBO_fzl, OnSelchangeCOMBOfzl)
	ON_CBN_SELCHANGE(IDC_COMBO_fag, OnSelchangeCOMBOfag)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

//--------------------------------------------------------| bei dialogstart DICEeinst
BOOL DICEeinst::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	UpdateData(1);

	CWinApp*   pApp = AfxGetApp();                               // ini profil lesen                      
	m_dt_fhg = pApp->GetProfileString("Farbe","Hintergrund",0);
	m_dt_fwl = pApp->GetProfileString("Farbe","Würfel",0);
	m_dt_fag = pApp->GetProfileString("Farbe","Augen",0);
	m_dt_fzl = pApp->GetProfileString("Farbe","Zahlen",0);
	m_vms    = pApp->GetProfileInt("Geschwindigkeit","msec",0);
	m_ons    = pApp->GetProfileInt("Geschwindigkeit","onset",0);
	m_wfl    = pApp->GetProfileInt("Geschwindigkeit","Würfel",0);
	m_ch_N   = pApp->GetProfileInt("Zahlenformat","N",0);
	m_ch_R   = pApp->GetProfileInt("Zahlenformat","R",0);
	m_ch_log = pApp->GetProfileInt("Logdatei","schreiben",0);

	if(m_ch_log==1) m_log = "EIN";
	if(m_ch_log==0) m_log = "AUS";

	UpdateData(0);
	 
	return 1;  
}

//--------------------------------------------------------| OnPaint DICEeinst
void DICEeinst::OnPaint() 
{
	CPaintDC ooo(this); 

	                     CRect o1(91, 18, 106, 35);
			 ooo.FillSolidRect(o1,   atoi(m_dt_fhg) );
						
					     CRect o2(91, 41, 106, 58);	
			 ooo.FillSolidRect(o2,   atoi(m_dt_fwl) );

			 			 CRect o3(91, 63, 106, 81);	
			 ooo.FillSolidRect(o3,   atoi(m_dt_fag) );

			 			 CRect o4(91, 87, 106, 104);	
			 ooo.FillSolidRect(o4,   atoi(m_dt_fzl) );
}

//--------------------------------------------------------| ereignisse DICEeinst

void DICEeinst::OnCheckN() {UpdateData(1);m_ch_R = !m_ch_N;UpdateData(0);}
void DICEeinst::OnCheckR() {UpdateData(1);m_ch_N = !m_ch_R;UpdateData(0);}

void DICEeinst::OnCHECKlog() 
{
	UpdateData(1);
	
	if(m_ch_log==1) m_log = "EIN";
	if(m_ch_log==0) m_log = "AUS";
	
	UpdateData(0);
}

void DICEeinst::OnLoged() 
{
	_spawnlp( _P_NOWAIT, "notepad.exe", "notepad.exe", "DICE_log.txt", NULL ); // log edit
}

void DICEeinst::OnBUTTONreset() 
{
	UpdateData(1);
	
	m_dt_fhg = "8421504";
	m_dt_fwl = "0";
	m_dt_fzl = "16777215";
	m_dt_fag = "16777215";
	m_vms = 100;
	m_ons = 300;
	m_wfl = 10;
	m_ch_N = 0;
	m_ch_R = 1;
	m_ch_log = 1;
	m_log = "EIN";

	UpdateData(0);
	RedrawWindow();
}

void DICEeinst::OnSelchangeCOMBOfhg() {UpdateData(1);UpdateData(0); RedrawWindow();}
void DICEeinst::OnSelchangeCOMBOfwl() {UpdateData(1);UpdateData(0); RedrawWindow();}
void DICEeinst::OnSelchangeCOMBOfzl() {UpdateData(1);UpdateData(0); RedrawWindow();}
void DICEeinst::OnSelchangeCOMBOfag() {UpdateData(1);UpdateData(0); RedrawWindow();}

void DICEeinst::OnOK() 
{
	UpdateData(1);

	CDICEDlg o; 
	         o.fhg_( atoi(m_dt_fhg) );
	         o.fwl_( atoi(m_dt_fwl) );
			 o.fag_( atoi(m_dt_fag) );
	         o.fzl_( atoi(m_dt_fzl) );
			 o.v_ms(m_vms);
			 o.v_on(m_ons);
			 o.v_wl(m_wfl);
			 o.zfrm(m_ch_R);
			 o.lg_ (m_ch_log);

	UpdateData(1);

	CWinApp* pApp = AfxGetApp();                                  // ini profil schreiben                               
	         pApp->WriteProfileString("Farbe","Hintergrund",  m_dt_fhg);   
	         pApp->WriteProfileString("Farbe","Würfel",m_dt_fwl);
			 pApp->WriteProfileString("Farbe","Augen",m_dt_fag);
			 pApp->WriteProfileString("Farbe","Zahlen",m_dt_fzl);
			 pApp->WriteProfileInt("Geschwindigkeit","msec",m_vms);
			 pApp->WriteProfileInt("Geschwindigkeit","onset",m_ons );
			 pApp->WriteProfileInt("Geschwindigkeit","Würfel",m_wfl); 
			 pApp->WriteProfileInt("Zahlenformat","N",m_ch_N );
			 pApp->WriteProfileInt("Zahlenformat","R",m_ch_R );
			 pApp->WriteProfileInt("Logdatei","schreiben",m_ch_log);

	CDialog::OnOK();
}



