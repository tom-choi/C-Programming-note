#include <iostream>
#define MAX 10000
using namespace std;

int main()
{
    int Y,people,dp[MAX],counter = 0,a = 0,ans = 0,b = 0,ans_2,ans_3;
    while (~scanf("%d%d", &Y, &people))
    {
        for (int i = 0; i < people; i++)
        {
            scanf("%d", &dp[i]);
            counter++;
            while (dp[i] - dp[a] >= Y)
            {
                a++;
                counter--;
            }
            if (counter > ans)
            {
                ans = counter;
                ans_2 = dp[a];
                ans_3 = dp[i];
            }
        }
        printf("%d %d %d\n", ans, ans_2, ans_3);
    }
    return 0;
}

//#include <stdio.h>
//int main() {
//    int Y, P, L[100000];
//    int i;
//    while (scanf("%d", &Y) == 1) {
//        scanf("%d", &P);
//        for (i = 0; i < P; i++)
//            scanf("%d", &L[i]);
//        int r = 0;
//        int mx = -1, al, ar;
//        for (i = 0; i < P; i++) {
//            while (r < P && L[r] <= L[i] + Y - 1)
//                r++;
//            if (r - i > mx) {
//                mx = r - i;
//                al = L[i], ar = L[r - 1];
//            }
//        }
//        printf("%d %d %d\n", mx, al, ar);
//    }
//    return 0;
//}