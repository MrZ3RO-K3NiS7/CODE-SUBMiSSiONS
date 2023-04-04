#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z, D, M;
    cin >> X >> Y;
    Z = X;
    while (X >= Y)
    {
        D = X / Y;
        Z = Z + D;
        M = X % Y;
        X = D + M;
    }
    cout << Z;
    return 0;
}
