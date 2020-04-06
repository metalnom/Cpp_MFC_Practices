﻿
// MessageBoxesDlg.h: 헤더 파일
//

#pragma once


// CMessageBoxesDlg 대화 상자
class CMessageBoxesDlg : public CDialogEx
{
// 생성입니다.
public:
	CMessageBoxesDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MESSAGEBOXES_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton8();
	afx_msg void OnClickedButtonYn();
	afx_msg void OnClickedButtonOc();
	afx_msg void OnClickedButtonYnc();
	afx_msg void OnClickedButtonRc();
	afx_msg void OnClickedButtonAri();
	afx_msg void OnClickedButtonOk();
	afx_msg void OnClickedButtonMfc();
	afx_msg void OnClickedButtonExit();
	CString m_strEdit;
};
