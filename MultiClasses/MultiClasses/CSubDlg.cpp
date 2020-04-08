// CSubDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MultiClasses.h"
#include "CSubDlg.h"
#include "afxdialogex.h"


// CSubDlg 대화 상자

IMPLEMENT_DYNAMIC(CSubDlg, CDialogEx)

CSubDlg::CSubDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SUB, pParent)
	, m_strInS1(_T(""))
	, m_strInS2(_T(""))
{

}

CSubDlg::~CSubDlg()
{
}

void CSubDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT_S1, m_strS1);
	//  DDX_Text(pDX, IDC_EDIT_S2, m_strS2);
	DDX_Text(pDX, IDC_EDIT_S1, m_strInS1);
	DDX_Text(pDX, IDC_EDIT_S2, m_strInS2);
}


BEGIN_MESSAGE_MAP(CSubDlg, CDialogEx)
	ON_BN_CLICKED(ID_OK, &CSubDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CSubDlg 메시지 처리기


void CSubDlg::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
