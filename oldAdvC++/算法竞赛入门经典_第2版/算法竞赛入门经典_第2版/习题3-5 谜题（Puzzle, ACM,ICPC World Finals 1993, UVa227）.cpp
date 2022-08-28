#include <iostream>

using namespace std;
char puzzle[10][10];
void printGraph() 
{
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (j) cout << ' '; 
            cout << puzzle[i][j];
        }
        cout << endl;
    }
}



int main()
{
    printGraph();

}