
// SendMsgDlg.h: 헤더 파일
//

#pragma once
typedef struct {
	long x;
	long y;
	char pTmp[256];
} MOUSESTATUS;

// CSendMsgDlg 대화 상자
class CSendMsgDlg : public CDialogEx
{
// 생성입니다.
public:
	CSendMsgDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SENDMSG_DIALOG };
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	CString m_strSend;
	afx_msg void OnClickedButtonSend();
	MOUSESTATUS mouseStatus;
	COPYDATASTRUCT msg;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};
