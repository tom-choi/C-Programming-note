#include <iostream>

using namespace std;
//�ҳ������ж���λ
int number_size(int num)
{
    int count = 0;
    for (int n = num; n != 0; count++)
    {
        n /= 10;
    }
    return count;
}
//�η�����
int power(int num, int count)
{
    int temppower = num;
    for (int i = 1; i < count; i++)
    {
        num *= temppower;
    }
    return (count == 0 ? ++count : num);
}
//�ҳ�ÿ��λ�������еĔ���
int finddigit(int num,int digit)
{
    int size = number_size(num);
    if (digit == 0)
    {
        /*printf("ERROR");*/
        return 0;
    }
    if (digit < size)
    {
        /*printf("��%dλ���֞�:%d\n", digit, (num / power(10, digit-1) % 10));*/
        return (num / power(10, digit - 1) % 10);
    }
    else if (digit == size)
    {
        /*printf("��%dλ���֞�:%d\n", digit, (num / power(10, digit-1)));*/
        return (num / power(10, digit - 1));
    }

    printf("ERROR");
}

//2�M���D10�M��
int BintoOX(int num)
{
    int tempnum = num;
    int size = number_size(num), sum = 0;
    printf("�@�e��%dλ����\n",size);
    for (int i = size; i > 0; i--)
    {
        if (finddigit(num, i) == 1)
        {
            sum += power(2, i-1);
        }
    }
    return (tempnum == 1 ? 1 : sum);
}

int main()
{
    //printf("%d",BintoOX(111100000));
    int a;
    //scanf_s("%d", &a); //5
    printf("%d",BintoOX(10111111101));
    return 0;
}