#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

int WINAPI _tWinMain(HINSTANCE hlnstance,HINSTANCE hPrevlnstance,LPTSTR lpCmdline,INT nCmdShow)
{
	//�����հ��ļ� //CREATE_ALWAYS
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"),GENERIC_READ | GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("�ļ������ɹ�!"), _T("TIPS"), MB_OK);
	}
	return 0;*/

	//���_һ���ѽ����ڵ��ļ� //OPEN_EXISTING
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("�ļ����_�ɹ�!"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("�ļ����_ʧ��!"), _T("TIPS"), MB_OK);
	}*/

	//���_һ���ѽ����ڵ��ļ����ļ������ڄt����
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("�ļ����_�ɹ�!"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("�ļ����_ʧ��!"), _T("TIPS"), MB_OK);
	}*/

	//���_�K���һ���ѽ����ڵ��ļ����ļ������ڄt����
	//HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	//if (HFILE != INVALID_HANDLE_VALUE)
	//{
	//	MessageBox(NULL, _T("�ļ����_�ɹ�!"), _T("TIPS"), MB_OK);
	//	CloseHandle(HFILE);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("�ļ����_ʧ��!"), _T("TIPS"), MB_OK);
	//}


	//�P�]�ļ�
	return 0;
}

