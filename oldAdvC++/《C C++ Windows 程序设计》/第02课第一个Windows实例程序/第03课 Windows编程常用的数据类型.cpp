#include <Windows.h>
#include <iostream>
#include <tchar.h>



//HINSTANCE
//DWORD 是 unsigned long 類型
//HANDLE 是 void，定義為:
//typedof PVOID HANDLE
//PVOID又是甚麼?
//PVOID是指向VOID的指針

int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	MessageBox(NULL, _T("Hello World!"), _T("Hello World!"), MB_OK);
	return 0;
}




//規律
//BYTE,CHAR,WORD,SHORT,INT

//指針會加上"LP"或"P"

//句柄類型命名"H"

//無符號命名為"U"

//常量類型命名"C"

//PARAM 消息

//HANDLE 對象的句柄
//HICON 圖標的句柄
//HINSTANCE 程序實例的句柄
//HWND 窗口的句柄

//SIZE_T 內存的大小
//WINAPI 調用API的方式