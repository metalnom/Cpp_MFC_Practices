
// ReceiveMsgDlg.h: 헤더 파일
//

#pragma once

typedef struct {
	long x;
	long y;
	char pTmp[256];
} MOUSESTATUS;

// CReceiveMsgDlg 대화 상자
class CReceiveMsgDlg : public CDialogEx
{
// 생성입니다.
public:
	CReceiveMsgDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECEIVEMSG_DIALOG };
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
	afx_msg LRESULT OnSendMsg(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	CString m_strX;
	CString m_strY;
	CString m_strReceiveMsg;
	CString m_strStatus;
	afx_msg BOOL OnCopyData(CWnd* pWnd, COPYDATASTRUCT* pCopyDataStruct);
	MOUSESTATUS* mouseStatus;
	COPYDATASTRUCT msg;
};
