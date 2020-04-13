#include "pch.h"
#include "CFileFindEx.h"

CString CFileFindEx::GetCreationTimeString(CString strTmp)
{
	CString str;
	CTime cTime;
	GetCreationTime(cTime);
	str.Format("%02d%s%02d%s%02d    %02d:%02d", cTime.GetYear(), strTmp, cTime.GetMonth(),
		strTmp, cTime.GetDay(), cTime.GetHour(), cTime.GetMinute());
	
	return str;
}

CString CFileFindEx::GetLengthString()
{
	CString str;
	str.Format("%lu", GetLength());

	return str;
}
