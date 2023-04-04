#include <iostream>
using namespace std;

int main()
{
    int X, C = 1;
    cin >> X;
    while (X / 2 != 0)
    {
        if (X % 2 != 0)
        {
            C++;
        }
        X = X / 2;
    }
    cout << C;
    return 0;
}
