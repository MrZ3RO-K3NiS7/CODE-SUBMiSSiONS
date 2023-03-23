#include <iostream>
using namespace std;

int main()
{
    int X, i, j, C = 0, a, b;
    cin >> X;
    for (i = 1; i <= X; i++)
    {
        for (j = 1; j <= X; j++)
        {
            if (i % j == 0 && i * j > X && i / j < X)
            {
                C = 1;
                a = i;
                b = j;
                break;
            }
        }
    }
    if (C == 1)
    {
        cout << a << " " << b;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
