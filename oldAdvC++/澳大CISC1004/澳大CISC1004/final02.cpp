#include <iostream>
using namespace std;

double myPowA(double X, int N) {
    if (N == 0)
        return 1;
    if (N == 1)
        return X;
    if (N < 0) {
        N = -N;
        X = 1 / X;
    }
    return X * myPowA(X, N - 1);
}

double myPowB(double X, int N) {
    if (N == 0)
        return 1;
    if (N == 1)
        return X;
    if (N < 0) {
        N = -N;
        X = 1 / X;
    }
    if (N % 2 == 0)
        return myPowB(X, N - 2) * myPowB(X, N - 2);
    else
        return X * myPowB(X, (N - 1) / 2) * myPowB(X, (N - 1) / 2);
}

int main() {
    cout << myPowA(2, -3) << endl;
    cout << myPowB(2, -3) << endl;
    return 0;
}