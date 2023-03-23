#include <iostream>
using namespace std;

int main()
{
    int x, y, i, j, C = 0;
    cin >> x >> y;
    if (x == y && y == 1)
    {
        cout << 2;
    }
    else
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                if (i * i + j == x && i + j * j == y)
                {
                    C++;
                }
            }
        }
        cout << C;
    }
    return 0;
}
