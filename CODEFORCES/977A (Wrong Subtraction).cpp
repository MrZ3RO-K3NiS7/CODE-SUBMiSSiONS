#include <iostream>
using namespace std;

int main()
{
    long long int x, y, count = 0;
    cin >> x >> y;
    while (1)
    {
        if (x % 10 != 0)
        {
            x = x - 1;
            count++;
        }
        else
        {
            x = x / 10;
            count++;
        }
        if (count == y)
        {
            break;
        }
    }
    cout << x;

    return 0;
}
