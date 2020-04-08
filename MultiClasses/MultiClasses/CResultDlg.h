#pragma once


// CResultDlg 대화 상자

class CResultDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CResultDlg)

public:
	CResultDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CResultDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_RESULT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditS1();
	afx_msg void OnBnClickedOk2();
	CString m_strOutM1;
	CString m_strOutM2;
	CString m_strOutM3;
	CString m_strOutS1;
	CString m_strOutS2;
};
