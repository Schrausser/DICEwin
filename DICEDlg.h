//------------------------------------------------------------------------| DICEDlg.h                                    //
//                                                                        | DICE, Zufallswürfelzahl (deutsch)            //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_DICEDLG_H__4BC0D2D5_004F_4FDE_91E8_D82180335183__INCLUDED_)
#define AFX_DICEDLG_H__4BC0D2D5_004F_4FDE_91E8_D82180335183__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

//----------------------------------------------------------------| klassen deklaration About
class About : public CDialog
{	
    public:
	About(); //----------------------------------------------| objekt deklaration 

	//{{AFX_DATA(About)
	enum { IDD = IDD_AboutDlg }; //--------------------------| resourcen deklaration //
	//}}AFX_DATA

	//{{AFX_VIRTUAL(About)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //------| steuerelement ereignis deklaration    
	//}}AFX_VIRTUAL

	protected:
	//{{AFX_MSG(About)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//----------------------------------------------------------------| klassen deklaration CDICEDlg
class CDICEDlg : public CDialog
{
	public:
	CDICEDlg(CWnd* pParent = NULL); //-----------------------| objekt deklaration CDICEDlg

	char ccc[1000]; //---------------------------------------| variablen deklaration
	const char* cc; //---------------------------------------|

	int wt_sw;

	void           fhg_(int fhg); //-------------------------| funktions deklaration
	void CDICEDlg::fwl_(int fwl);  //------------------------|
	void           fag_(int fag); //-------------------------|
	void           fzl_(int fzl); //-------------------------|
	void CDICEDlg::v_ms(int vms); //-------------------------|
	void CDICEDlg::v_on(int ons); //-------------------------|
	void CDICEDlg::v_wl(int wfl); //-------------------------|
	void           zfrm(int zfrm_); //-----------------------|
	void            lg_(int lg); //--------------------------|

	double CDICEDlg::qzufall(double seed); //----------------|
	
	//{{AFX_DATA(CDICEDlg)
	enum { IDD = IDD_DICE_DIALOG }; //-----------------------| resourcen deklaration //
	
    CDialog m_InfoDlg; //------------------------------------| deklaration <<

	//}}AFX_DATA
	
	//{{AFX_VIRTUAL(CDICEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //------| steuerelement ereignis deklaration	
	//}}AFX_VIRTUAL

	protected:
	HICON m_hIcon; //----------------------------------------| icon handler
	HCURSOR m_Csr1; 
	HCURSOR m_Csr2; 
	HCURSOR m_Csr3; 


	//{{AFX_MSG(CDICEDlg)
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam); //---| ereignis deklaration
	virtual BOOL OnInitDialog(); //--------------------------|
	afx_msg HCURSOR OnQueryDragIcon(); //--------------------|
	afx_msg void OnTimer(UINT nIDEvent); //------------------|
	afx_msg void OnPaint();  //------------------------------|
	afx_msg void OnSize(UINT nType, int cx, int cy);  //-----|
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point); //|
	afx_msg void OnButton1();  //----------------------------|
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
