#include <iostream>
using namespace std;

int main()
{
    int X, i, Y, C = 0;
    cin >> X;
    for (i = 1; i < X; i++)
    {
        Y = X - i;
        if (Y % i == 0)
        {
            C++;
        }
    }
    cout << C;

    return 0;
}
