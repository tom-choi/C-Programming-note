#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int nSolu = 0; //解的總數
int nCheck = 0; //嘗試的總次數

void displayRow(int row, int column, int N) 
{ //打印當前皇后（放置於col列）所在行
	printf("%2d: ", row);
	int i = 0;
	while (i++ < column)
	{
		printf("□");
	}
	printf("■");
	while (i++ < N)
	{
		printf("□");
	}
	printf("%2d\n", column);
}

void displaySolution(int* solu, int N) 
{
	for (int i = 0; i < N; i++)
	{
		displayRow(i, solu[i], N);
	}
	for (int i = 0; i < N; i++) 
	{
		printf("(%d, %d) ", i, solu[i]);
		//每4個結果換行
		if (i % 4 == 3)
		{
			cout << endl;
		}
	}
	cout << endl;
}

/*判斷第 k 個皇后是否與之前的 k-1 個皇后衝突（既可以互相攻擊）
  如果與任一皇后衝突，則返回 true，否則返回false*/
bool is_conflict(int k, int* solu) 
{
	for (int i = 0; i < k; i++) 
	{
		if (solu[k] == solu[i] || (k + solu[k]) == (i + solu[i]) || (k - solu[k]) == (i - solu[i])) 
		{
			return true;
		}
	}
	return false;
}

/*利用純數組方案解決N個皇后問題*/
void placeQueensWithPureArray(unsigned int N) 
{
	int* solu = new int[N];
	int size = 0;
	solu[0] = 0; //從原點出發
	while (0 < size || solu[size] < N)
	{
		if (N <= size || N <= solu[size]) 
		{ 
			size--;	//如果出界仍沒有找到可以放置皇后，則回溯
			solu[size]++; //回溯一行，繼續試探下一列
		}
		else 
		{ 
			//否則，試探下一行
			while (solu[size] < N && is_conflict(size, solu))
			{ 
				//通過與已有皇后的比對
				solu[size]++; //嘗試找到可擺放下一皇后的列
				nCheck++; //增加嘗試的總次數
			}
			if (solu[size] < N) 
			{ 
				//若存在可擺放的列
				size++; //當前解的規模加 1
				if (N <= size) 
				{ 
					//若解的規模已構成全局解
					nSolu++; //全局解的數量加 1
					displaySolution(solu, N); //打印全局解
				}
				solu[size] = 0;//轉入下一行，從第0列開始，試探下一皇后
			}
		}
	}
}

int main()
{
	int N = 8;
	placeQueensWithPureArray(N);
	printf("We have %d Solutions for %d Queens (一共嘗試了%d次)", nSolu, N, nCheck);
}