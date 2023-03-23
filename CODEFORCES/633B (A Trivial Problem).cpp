#include <iostream>
using namespace std;

int main()
{
    int X, i, N, Z, Sum = 0, j;
    cin >> X;
    for (i = 1; i <= 100000; i++)
    {
        N = 1;
        Z = i;
        while (1)
        {
            if (Z % 5 == 0)
            {
                N++;
                Z = Z / 5;
            }
            else
            {
                break;
            }
        }
        Sum = Sum + N;
        if (Sum == X)
        {
            cout << "5" << endl;
            for (j = 5 * i; j < 5 * i + 5; j++)
            {
                cout << j << " ";
            }
            return 0;
        }
        else if (Sum > X)
        {
            break;
        }
    }
    cout << "0";

    return 0;
}
