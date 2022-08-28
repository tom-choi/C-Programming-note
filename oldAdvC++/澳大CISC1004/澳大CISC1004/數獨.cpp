#include <iostream>
#include <vector>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        //檢查直行
        for (int i = 0; i < 9; i++)
        {
            //整一個bool數組紀錄出現過既數字
            bool judge[9];
            memset(judge, false, sizeof(judge));
            for (int j = 0; j < 9; j++)
            {
                //不紀錄'.'
                //紀錄數字出現的位置:如果輸入為1，則judge[0]為true
                //剛剛輸入的1令judge[0]為true，如果下一次再輸入1的時候，就會判斷數字重複，直接return false
                if (board[i][j] == '.')
                {
                    continue;
                }
                if (judge[board[i][j] - '0' - 1] == true)
                {
                    return false;
                }
                judge[board[i][j] - '0' - 1] = true;
            }
        }

        //檢查橫行
        for (int i = 0; i < 9; i++)
        {
            memset(judge, false, sizeof(judge));
            for (int j = 0; j < 9; j++)
            {
                //同理
                if (board[j][i] == '.')
                {
                    continue;
                }
                if (judge[board[j][i] - '0' - 1] == true)
                {
                    return false;
                }
                judge[board[j][i] - '0' - 1] = true;
            }
        }

        //九宮格//分開三格小格
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                memset(judge, false, sizeof(judge));
                //有(0,0)就輸出(0,0),(0,1),(0,2),(1,0)......共9個
                for (int iz = i * 3; iz < i * 3 + 3; iz++)
                {
                    for (int jz = j * 3; jz < j * 3 + 3; jz++)
                    {
                        //同理
                        if (board[iz][jz] == '.')
                        {
                            continue;
                        }
                        if (judge[board[iz][jz] - '0' - 1] == true)
                        {
                            return false;
                        }
                        judge[board[iz][jz] - '0' - 1] = true;
                    }
                }
            }
        }
        return true;
    }
};