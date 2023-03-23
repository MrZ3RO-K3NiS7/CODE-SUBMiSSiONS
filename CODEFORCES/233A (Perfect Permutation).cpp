#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cin >> x;
    if (x % 2 == 0)
    {
        for (i = 1; i <= x; i++)
            if (i % 2 == 0)
            {
                cout << i - 1 << " ";
            }
            else
            {
                cout << i + 1 << " ";
            }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
