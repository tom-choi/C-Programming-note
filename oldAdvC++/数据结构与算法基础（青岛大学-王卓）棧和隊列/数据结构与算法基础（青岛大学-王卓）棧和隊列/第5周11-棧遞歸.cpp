#include <iostream>
using namespace std;

//���һ���^��ֱ�ӻ��g�ӣ��t���@�����f�w
long Fact(long n)
{
	//�����
	if (n == 0)
		return 1;
	//�w�{�
	else
		return n * Fact(n - 1);
}
//���{���ȷ���
//β�f�w->ѭ�h�Y���������f�w->ѭ�h�Y��


int main()
{
	return 0;
}