#include <iostream>
using namespace std;

int main()
{
    int x, y, i, j;
    cin >> x >> y;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (i % 2 == 1)
            {
                cout << "#";
            }
        }
        if (i % 2 == 0 && i % 4 != 0)
        {
            for (j = 1; j <= y - 1; j++)
            {
                cout << ".";
            }
            cout << "#";
        }
        if (i % 4 == 0)
        {
            cout << "#";
            for (j = 1; j <= y - 1; j++)
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
