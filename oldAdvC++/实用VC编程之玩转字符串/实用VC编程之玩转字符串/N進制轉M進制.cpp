#include <iostream>
#define MAXN 100
using namespace std;
int Nresult[MAXN], intdictionary[MAXN],Nresulti = 0;
string Mresult;
string chardictionary = "0123456789ABCDEFGHIJKLMN";

//思路:N進制--->10進制--->M進制
//製作字典，起始設定
void dictionarystartup()
{
    for (int i = 0; i < 35
        ; i++)
    {
        intdictionary[i] = i;
    }
}

//找出數字有多少位
int number_size(int num)
{
    int count = 0;
    for (int n = num; n != 0; count++)
    {
        n /= 10;
    }
    return count;
}
//次方函數
int power(int num, int count)
{
    int temppower = num;
    for (int i = 1; i < count; i++)
    {
        num *= temppower;
    }
    return (count == 0 ? ++count : num);
}

//製作字典，找到每一個字符所代表的數字，並紀錄到數組
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

//製作數字類型字典，找到單個數字所代表的字符，並紀錄到字符串中
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

//輸出數組
void outputresult()
{
    for (int i = 0; Nresult[i] != NULL; i++)
    {
        cout << Nresult[i];
    }
}

//BaseN進制轉換成M進制
void changeBase(int N, int M, string numstring)
{
    //N進制轉換成十進制
    /*cout << N << "進制數字為: " << numstring << endl;*/
    memset(Nresult, 0, MAXN);
    Mresult = "";
    Nresulti = 0;
    int length = numstring.length(), sum = 0;;
    for (int i = 1; i <= length; i++)
    {
        Ndictionary(numstring, i);
    }
    //cout << "10進制數字為: ";
    int j = 0;
    for (int i = length; i > 0; i--)
    {
        sum += Nresult[j++]*power(N, i - 1);
    }
    //cout << sum << endl;

    //Base十進制轉換成M進制
    int size = number_size(sum); 
    for (int i = 0; sum != 0; i++)
    {
        Mdictionary(sum % M);
        sum /= M;
    }
    cout << M << "進制數字為: ";
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
    cout << "2進制數字為: " << str1 << endl;
    for (int i = 3; i <= 20; i++)
    {
        changeBase(2, i, str1);
    }
    return 0;
}