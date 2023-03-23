#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y;
    if (X < Y)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        if (X % 2 == 0)
        {
            Z = X / 2;
        }
        else
        {
            Z = ceil(X * 1.0 / 2);
        }
    }
    while (Z % Y != 0)
    {
        Z++;
    }
    cout << Z << endl;

    return 0;
}
