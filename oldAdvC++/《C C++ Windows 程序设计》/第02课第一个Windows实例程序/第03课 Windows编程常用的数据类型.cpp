#include <Windows.h>
#include <iostream>
#include <tchar.h>



//HINSTANCE
//DWORD �� unsigned long ���
//HANDLE �� void�����x��:
//typedof PVOID HANDLE
//PVOID�������N?
//PVOID��ָ��VOID��ָ�

int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	MessageBox(NULL, _T("Hello World!"), _T("Hello World!"), MB_OK);
	return 0;
}




//Ҏ��
//BYTE,CHAR,WORD,SHORT,INT

//ָᘕ�����"LP"��"P"

//����������"H"

//�o��̖������"U"

//�����������"C"

//PARAM ��Ϣ

//HANDLE ����ľ��
//HICON �D�˵ľ��
//HINSTANCE �������ľ��
//HWND ���ڵľ��

//SIZE_T �ȴ�Ĵ�С
//WINAPI �{��API�ķ�ʽ