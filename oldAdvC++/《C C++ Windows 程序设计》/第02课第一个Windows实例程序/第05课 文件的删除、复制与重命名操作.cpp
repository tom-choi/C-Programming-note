#include <Windows.h>
#include <iostream>
#include <tchar.h>
int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//�h���ļ�
	//BOOL bDelOK = DeleteFile(_T("D:\\456.png"));
	//if (bDelOK)
	//{
	//	MessageBox(NULL, _T("�h���ɹ�"), _T("TIPS"), MB_OK);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("�h��ʧ��"), _T("TIPS"), MB_OK);
	//}

	//COPY �ļ�
	//BOOL CopyOK = CopyFile(_T("D:\\cctry.png"), _T("D:\\cctry2.png"), FALSE);
	//if (CopyOK)
	//{
	//	MessageBox(NULL, _T("COPY�ɹ�"), _T("TIPS"), MB_OK);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("COPYʧ��"), _T("TIPS"), MB_OK);
	//}

	//�Ƅ��ļ�
	BOOL MoveOK = MoveFile(_T("F:\\BaiduNetdiskDownload\\1081100512_1100520.pdf"), _T("E:\\rubbish\\1081100512_1100520.pdf"));
	if (MoveOK)
	{
		MessageBox(NULL, _T("�Ƅ��ļ��ɹ�"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("�Ƅ��ļ�ʧ��"), _T("TIPS"), MB_OK);
	}
}
