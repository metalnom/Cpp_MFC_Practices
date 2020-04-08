// CResultDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MultiClasses.h"
#include "CResultDlg.h"
#include "afxdialogex.h"


// CResultDlg 대화 상자

IMPLEMENT_DYNAMIC(CResultDlg, CDialogEx)

CResultDlg::CResultDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_RESULT, pParent)
	, m_strOutM1(_T(""))
	, m_strOutM2(_T(""))
	, m_strOutM3(_T(""))
	, m_strOutS1(_T(""))
	, m_strOutS2(_T(""))
{

}

CResultDlg::~CResultDlg()
{
}

void CResultDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_M1_OUT, m_strOutM1);
	DDX_Text(pDX, IDC_EDIT_M2_OUT, m_strOutM2);
	DDX_Text(pDX, IDC_EDIT_M3_OUT, m_strOutM3);
	DDX_Text(pDX, IDC_EDIT_S1_OUT, m_strOutS1);
	DDX_Text(pDX, IDC_EDIT_S2_OUT, m_strOutS2);
}


BEGIN_MESSAGE_MAP(CResultDlg, CDialogEx)
END_MESSAGE_MAP()


// CResultDlg 메시지 처리기
