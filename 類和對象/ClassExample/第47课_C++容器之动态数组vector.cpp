#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test01()
{
	vector<int> arr_int;
	//arr_int[idx];arr_int.at(idx); //���ض�̬�������±�Ϊ idx �� arr_int[idx] Ԫ�ص�ֵ
	arr_int.size();        //���� arr_int ����Ԫ�ص��ܸ���
	arr_int.front();        //���� arr_int ����ĵ�һ��Ԫ�ص�ֵ
	arr_int.back();        //���� arr_int ��������һ��Ԫ�ص�ֵ
	arr_int.clear();        //��� arr_int ���飬�������������Ԫ�ض�ɾ��
	arr_int.begin();        //���� arr_int �����һ�������±�
	arr_int.end();        //���� arr_int �������һ�������±�
	arr_int.empty();        //�ж� arr_int �����Ƿ�Ϊ�գ����Ϊ���򷵻�true���ǿգ���Ԫ�أ��򷵻�false
	//arr_int.swap(v1);    //v1����һ����̬���飬�� arr_int �� v1 ������̬�����Ԫ�ػ���
	//swap(arr_int, v1);    //ͬ��
}

int main()
{
	int a[] = { 1, 4, 3, 7, 9, 3, 6, 8, 3, 5, 2, 3, 7 };
	vector<int> arr_int;
	arr_int.insert(arr_int.end(), a, a + sizeof(a) / sizeof(int));

	cout << *arr_int.begin() << endl;

	vector<int>::iterator itor;
	for (itor = arr_int.begin(); itor != arr_int.end(); itor++)//ʹ�� for ѭ��ɾ����̬�����е�ֵΪ 3 ��Ԫ��
	{
		if (*itor == 3)
		{
			itor = arr_int.erase(itor);
			itor--;
		}

	}
	for (int idx = 0; idx < arr_int.size(); idx++)//ʹ�� for ѭ����ӡ���
	{
		cout << arr_int[idx] << " ";
	}
	cout << endl;


	return 0;
}