#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z, i = 1, C = 0;
    cin >> X >> Y;
    Z = 240 - Y;
    while (Z - (i * 5) >= 0)
    {
        Z = Z - (i * 5);
        C++;
        i++;
        if (Z <= 0 || C == X)
        {
            break;
        }
    }
    cout << C;

    return 0;
}
