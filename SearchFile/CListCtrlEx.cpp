// CListCtrlEx.cpp: 구현 파일
//

#include "pch.h"
#include "SearchFile.h"
#include "CListCtrlEx.h"


// CListCtrlEx

IMPLEMENT_DYNAMIC(CListCtrlEx, CListCtrl)

CListCtrlEx::CListCtrlEx()
{

}

CListCtrlEx::~CListCtrlEx()
{
}


BEGIN_MESSAGE_MAP(CListCtrlEx, CListCtrl)
END_MESSAGE_MAP()



// CListCtrlEx 메시지 처리기

int CListCtrlEx::AddItem(LPCTSTR strItem, int nItem, int nSubItem, UINT nState,
	int nImageIndex, long nParam)
{
	LVITEM lvItem;
	lvItem.mask = LVIF_TEXT;
	lvItem.iItem = nItem;
	lvItem.iSubItem = nSubItem;
	lvItem.pszText = (LPTSTR)strItem;

	if (nState != -1)
	{
		lvItem.mask |= LVIF_STATE;
		lvItem.state |= nState;
	}
	if (nImageIndex != -1)
	{
		lvItem.mask |= LVIF_IMAGE;
		lvItem.state |= nImageIndex;
	}
	if (nParam != -1)
	{
		lvItem.mask |= LVIF_PARAM;
		lvItem.state |= nParam;
	}
	if (nSubItem == 0)
	{
		return InsertItem(&lvItem);
	}
	else
	{
		return SetItem(&lvItem);
	}
}
