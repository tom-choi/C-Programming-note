#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
	//窄字節
	char *p_A1 = "123";
	int A_len = strlen(p_A1);
	int atoi_p_A = atoi(p_A1);
	//Unicode寬字節
	wchar_t *p_W1 = L"456";
	int W_len = wcslen(p_W1);
	int wtoi_p_W = _wtoi(p_W1);
	//通用類型
	TCHAR *p_T1 = _T("789");
	int T_len = _tclen(p_T1);
	int tstoi_p_W = _tstoi(p_T1);


	//char p_A2[3] = {0};
	//wchar_t p_W2[] = L"abcde";
	//TCHAR p_T2[] = _T("abcde");

	//strcpy(p_A2, p_A1);
	//wcscpy(p_W2, p_W1);
	//_tcscpy(p_T2, p_T1);

	//長度
	int a_size = (strlen(p_A1) + 1) * sizeof(char);

	int w_size = (wcslen(p_W1) + 1) * sizeof(wchar_t);

	int t_size = (_tcslen(p_T1) + 1) * sizeof(TCHAR);
	//增加缓冲区的大小，以字節為單位
	
	//char p_A2[3] = { 0 };
	//strcpy_s(p_A2, 3,"123456");

	return 0;
}