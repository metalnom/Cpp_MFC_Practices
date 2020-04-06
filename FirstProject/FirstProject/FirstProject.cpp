#include <Windows.h>

#include <tchar.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASS WndClass;			// 윈도우 클래스 구조체
	HWND hwnd;					// 윈도우 핸들
	MSG msg;					// 메시지 구조체

	WndClass.style = CS_HREDRAW | CS_VREDRAW;						// 클래스 스타일
	WndClass.lpfnWndProc = WndProc;									// 윈도우 프로시져
	WndClass.cbClsExtra = 0;										// 윈도우 클래스 데이터 영역
	WndClass.cbWndExtra = 0;										// 윈도우의 데이터 영역
	WndClass.hInstance = hInstance;									// 인스턴스 핸들
	WndClass.hIcon = LoadIcon(NULL, IDC_ARROW);						// 아이콘 핸들
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);					// 커서 핸들
	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	// 배경 브러시 핸들(흰색 배경)
	WndClass.lpszMenuName = NULL;									// 메뉴 이름
	WndClass.lpszClassName = TEXT("MouseClass");					// 윈도우 클래스 이름
	if (!RegisterClass(&WndClass))									// 윈도우 클래스 register
		return 1;

	hwnd = CreateWindow(			// 윈도우 생성 API 함수
		TEXT("MouseClass"),			// 등록된 윈도우 클래스 이름
		TEXT("MouseSDK"),			// 타이틀바에 출력될 문자
		WS_OVERLAPPEDWINDOW,		// 윈도우 스타일
		CW_USEDEFAULT,				// 윈도우 좌측 상단의 x좌표
		CW_USEDEFAULT,				// 윈도우 좌측 상단의 y좌표
		CW_USEDEFAULT,				// 윈도우의 너비
		CW_USEDEFAULT,				// 윈도우의 높이
		NULL,						// 부모 윈도우의 핸들
		NULL,						// 메뉴 또는 자식 윈도우의 핸들
		hInstance,					// 어플리케이션 인스턴스 핸들
		NULL						// 윈도우 생성 데이터의 주소
	);

	ShowWindow(hwnd, nCmdShow);		// 프레임 윈도우를 화면에 표시

	while (GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;					// 디바이스 컨텍스트
	PAINTSTRUCT ps;				// 페인트 구조체
	TCHAR str1[200] = TEXT("마우스를 클릭하세요");
	TCHAR str2[200] = TEXT("오른쪽 마우스 / 왼쪽 마우스를 클릭하시면 메시지 상자가 나타납니다.");

	switch (message)			// 커널에서 들어온 메시지를 switch문으로 처리
	{
	case WM_CREATE:
		return 0;

	case WM_LBUTTONDOWN:
		MessageBox(hwnd, TEXT("왼쪽 마우스를 클릭하셨습니다."), TEXT("왼쪽 마우스 클릭!"), MB_OK);
		return 0;

	case WM_RBUTTONDOWN:
		MessageBox(hwnd, TEXT("오른쪽 마우스를 클릭하셨습니다."), TEXT("오른쪽 마우스 클릭!"), MB_OK);
		return 0;

	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		TextOut(hdc, 100, 100, str1, lstrlen(str1));
		TextOut(hdc, 100, 200, str2, lstrlen(str2));
		EndPaint(hwnd, &ps);
		return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, message, wParam, lParam);
}

