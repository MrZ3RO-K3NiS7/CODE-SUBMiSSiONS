#include <iostream>
using namespace std;

int main()
{
    int N, C, Y;
    cin >> N;
    int X = N / 4;
    C = X * 2;
    if (N % 4 == 0)
    {
        cout << X * X;
    }
    else
    {
        Y = (N - C) / 2;
        cout << X * Y;
    }
    return 0;
}
