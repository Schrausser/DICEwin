//------------------------------------------------------------------------| DICEeinst.h                                    //
//                                                                        | DICE, Zufallswürfelzahl (deutsch)            //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_DICEEINST_H__09D31ECF_8E39_4F11_8E93_8760D85CA5A0__INCLUDED_)
#define AFX_DICEEINST_H__09D31ECF_8E39_4F11_8E93_8760D85CA5A0__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

//----------------------------------------------------------------| klassen deklaration DICEeinst
class DICEeinst : public CDialog
{
	public:
	DICEeinst(CWnd* pParent = NULL); //-------------------------| objekt deklaration 
	 
	int sw_N, sw_R; //------------------------------------------| variablen deklaration

	//{{AFX_DATA(DICEeinst)
	enum { IDD = IDD_Einstellungen };
	int		m_vms; //-------------------------------------------| variablen deklaration
	BOOL	m_ch_N; //------------------------------------------|
	BOOL	m_ch_R; //------------------------------------------|
	BOOL	m_ch_log; //----------------------------------------|
	CString	m_log; //-------------------------------------------|
	CString	m_dt_fhg; //----------------------------------------|
	CString	m_dt_fwl; //----------------------------------------|
	CString	m_dt_fzl; //----------------------------------------|
	CString	m_dt_fag; //----------------------------------------|
	int		m_ons;
	int		m_wfl;
	//}}AFX_DATA

	//{{AFX_VIRTUAL(DICEeinst)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //---------| steuerelement ereignis deklaration    
	//}}AFX_VIRTUAL

	protected:
	//{{AFX_MSG(DICEeinst)
	virtual void OnOK(); //-------------------------------------| ereignis deklaration
	afx_msg void OnCheckN(); //---------------------------------| 
	afx_msg void OnCheckR(); //---------------------------------| 
	afx_msg void OnCHECKlog(); //-------------------------------| 
	afx_msg void OnLoged(); //----------------------------------| 
	virtual BOOL OnInitDialog(); //-----------------------------| 
	afx_msg void OnBUTTONreset(); //----------------------------| 
	afx_msg void OnPaint(); //----------------------------------| 
	afx_msg void OnSelchangeCOMBOfhg(); //----------------------| 
	afx_msg void OnSelchangeCOMBOfwl(); //----------------------| 
	afx_msg void OnSelchangeCOMBOfzl(); //----------------------| 
	afx_msg void OnSelchangeCOMBOfag(); //----------------------| 
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
