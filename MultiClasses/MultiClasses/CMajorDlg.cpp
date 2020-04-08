// CMajorDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MultiClasses.h"
#include "CMajorDlg.h"
#include "afxdialogex.h"


// CMajorDlg 대화 상자

IMPLEMENT_DYNAMIC(CMajorDlg, CDialogEx)

CMajorDlg::CMajorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_MAJOR, pParent)
	, m_strInM1(_T(""))
	, m_strInM2(_T(""))
	, m_strInM3(_T(""))
{

}

CMajorDlg::~CMajorDlg()
{
}

void CMajorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT_M1, m_strM1);
	//  DDX_Text(pDX, IDC_EDIT_M2, m_strM2);
	//  DDX_Text(pDX, IDC_EDIT_M3, m_strM3);
	DDX_Text(pDX, IDC_EDIT_M1, m_strInM1);
	DDX_Text(pDX, IDC_EDIT_M2, m_strInM2);
	DDX_Text(pDX, IDC_EDIT_M3, m_strInM3);
}


BEGIN_MESSAGE_MAP(CMajorDlg, CDialogEx)
END_MESSAGE_MAP()


// CMajorDlg 메시지 처리기
