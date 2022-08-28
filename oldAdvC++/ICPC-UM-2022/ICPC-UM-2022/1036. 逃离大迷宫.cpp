#include <iostream>
#include <vector>
using namespace std;

#define MAX 100000
vector<vector<int>> my_map(MAX);
bool judge = false;
int my_move[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
void DFS(int x,int y, int xs, int ys, int xe, int ye)
{
    if (x < 0 || x >= MAX || y < 0 || y >= MAX || my_map[x][y] == -1)
        return;
    else if (x == xe && y == ye)
    {
        judge = true;
    }
    my_map[x][y] = -1;
    for (int i = 0; i < 4;i++)
    {
        int xb = x + my_move[i][0];
        int yb = y + my_move[i][1];
        DFS(xb,yb,xs,ys,xe,ye);
    }
}
bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target){
    for (int i = 0; i < blocked.size();i++)
    {
        my_map[blocked[i][0]][blocked[i][1]] = -1;
    }
    DFS(source[0],source[1],source[0],source[1],target[0],target[1]);
    return judge;
}

int 