
// SearchFileDlg.h: 헤더 파일
//

#pragma once
#include "CListCtrlEx.h"


// CSearchFileDlg 대화 상자
class CSearchFileDlg : public CDialogEx
{
// 생성입니다.
public:
	CSearchFileDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEARCHFILE_DIALOG };
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
	afx_msg void OnTcnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnLvnItemchangedList1(NMHDR* pNMHDR, LRESULT* pResult);
	CTabCtrl m_tab;
	CButton m_btnStart;
	CButton m_btnStop;
	CString m_strFileName;
	CString m_strFileLocation;
	BOOL m_bSub;
	CListCtrlEx m_lstResult;
	CStatic m_stcStatus;
	CImageList m_img;
	void SearchFileNotSub();
	bool m_bStop;
	CString m_strToken;
	void SearchFile(CString strStartFolder);
	afx_msg void OnClickedButtonStart();
	afx_msg void OnClickedButtonStop();
//	void IsFolder();
	BOOL IsFolder();
};
