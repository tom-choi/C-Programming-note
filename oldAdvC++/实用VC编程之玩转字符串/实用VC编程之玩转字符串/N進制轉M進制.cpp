#include <iostream>
#define MAXN 100
using namespace std;
int Nresult[MAXN], intdictionary[MAXN],Nresulti = 0;
string Mresult;
string chardictionary = "0123456789ABCDEFGHIJKLMN";

//˼·:N�M��--->10�M��--->M�M��
//�u���ֵ䣬��ʼ�O��
void dictionarystartup()
{
    for (int i = 0; i < 35
        ; i++)
    {
        intdictionary[i] = i;
    }
}

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

//�u���ֵ䣬�ҵ�ÿһ���ַ�������Ĕ��֣��K�o䛵����M
void Ndictionary(string str,int digit)
{
    digit--;
    for (int j = 0; chardictionary.length(); j++)
    {
        if (str[digit] == chardictionary[j])
        {
            Nresult[Nresulti++] = intdictionary[j];
            return;
        }
    }
    printf("ERROR");
}

//�u����������ֵ䣬�ҵ��΂�������������ַ����K�o䛵��ַ�����
void Mdictionary(int digit)
{
    for (int j = 0; sizeof(intdictionary)/4; j++)
    {
        if (digit == intdictionary[j])
        {
            Mresult += chardictionary[j];
            return;
        }
    }
    printf("ERROR");
}

//ݔ�����M
void outputresult()
{
    for (int i = 0; Nresult[i] != NULL; i++)
    {
        cout << Nresult[i];
    }
}

//BaseN�M���D�Q��M�M��
void changeBase(int N, int M, string numstring)
{
    //N�M���D�Q��ʮ�M��
    /*cout << N << "�M�Ɣ��֞�: " << numstring << endl;*/
    memset(Nresult, 0, MAXN);
    Mresult = "";
    Nresulti = 0;
    int length = numstring.length(), sum = 0;;
    for (int i = 1; i <= length; i++)
    {
        Ndictionary(numstring, i);
    }
    //cout << "10�M�Ɣ��֞�: ";
    int j = 0;
    for (int i = length; i > 0; i--)
    {
        sum += Nresult[j++]*power(N, i - 1);
    }
    //cout << sum << endl;

    //Baseʮ�M���D�Q��M�M��
    int size = number_size(sum); 
    for (int i = 0; sum != 0; i++)
    {
        Mdictionary(sum % M);
        sum /= M;
    }
    cout << M << "�M�Ɣ��֞�: ";
    for (int i = Mresult.length(); i >= 0; i--)
    {
        cout << Mresult[i];
    }
    cout << endl;
    return;
}

int main()
{
    dictionarystartup();
    outputresult();
    string str1= "111100";
    cout << "2�M�Ɣ��֞�: " << str1 << endl;
    for (int i = 3; i <= 20; i++)
    {
        changeBase(2, i, str1);
    }
    return 0;
}