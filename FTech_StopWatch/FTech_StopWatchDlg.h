
// FTech_StopWatchDlg.h : header file
//

#pragma once
#include "StopWatch.h"

// CFTech_StopWatchDlg dialog
class CFTech_StopWatchDlg : public CDialogEx
{
// Construction
public:
	CFTech_StopWatchDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FTech_StopWatch_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

public :
	CStopWatch m_SW;

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnStopwatch();
	afx_msg void OnBnClickedBtnLap();
};
