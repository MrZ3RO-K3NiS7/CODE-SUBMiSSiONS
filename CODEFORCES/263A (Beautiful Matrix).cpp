#include <iostream>
using namespace std;

int main()
{
    int i, j, X, p, q;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cin >> X;
            if (X == 1)
            {
                p = abs(3 - i);
                q = abs(3 - j);
                break;
            }
        }
    }
    cout << p + q;

    return 0;
}
