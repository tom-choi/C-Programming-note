#include <Windows.h>
#include <iostream>
#include <tchar.h>
int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//刪除文件
	//BOOL bDelOK = DeleteFile(_T("D:\\456.png"));
	//if (bDelOK)
	//{
	//	MessageBox(NULL, _T("刪除成功"), _T("TIPS"), MB_OK);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("刪除失敗"), _T("TIPS"), MB_OK);
	//}

	//COPY 文件
	//BOOL CopyOK = CopyFile(_T("D:\\cctry.png"), _T("D:\\cctry2.png"), FALSE);
	//if (CopyOK)
	//{
	//	MessageBox(NULL, _T("COPY成功"), _T("TIPS"), MB_OK);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("COPY失敗"), _T("TIPS"), MB_OK);
	//}

	//移動文件
	BOOL MoveOK = MoveFile(_T("F:\\BaiduNetdiskDownload\\1081100512_1100520.pdf"), _T("E:\\rubbish\\1081100512_1100520.pdf"));
	if (MoveOK)
	{
		MessageBox(NULL, _T("移動文件成功"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("移動文件失敗"), _T("TIPS"), MB_OK);
	}
}
