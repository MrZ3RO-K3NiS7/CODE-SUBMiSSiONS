#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z = 0;
    cin >> X >> Y;
    while (1)
    {
        if (X == 0)
        {
            break;
        }
        X--;
        Z++;
        if (Z % Y == 0)
        {
            X++;
        }
    }
    cout << Z;
}
