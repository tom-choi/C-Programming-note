#include <iostream>
#include <vector>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        //�z��ֱ��
        for (int i = 0; i < 9; i++)
        {
            //��һ��bool���M�o䛳��F�^�Ȕ���
            bool judge[9];
            memset(judge, false, sizeof(judge));
            for (int j = 0; j < 9; j++)
            {
                //���o�'.'
                //�o䛔��ֳ��F��λ��:���ݔ���1���tjudge[0]��true
                //����ݔ���1��judge[0]��true�������һ����ݔ��1�ĕr�򣬾͕��Д��������}��ֱ��return false
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

        //�z��M��
        for (int i = 0; i < 9; i++)
        {
            memset(judge, false, sizeof(judge));
            for (int j = 0; j < 9; j++)
            {
                //ͬ��
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

        //�Ōm��//���_����С��
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                memset(judge, false, sizeof(judge));
                //��(0,0)��ݔ��(0,0),(0,1),(0,2),(1,0)......��9��
                for (int iz = i * 3; iz < i * 3 + 3; iz++)
                {
                    for (int jz = j * 3; jz < j * 3 + 3; jz++)
                    {
                        //ͬ��
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