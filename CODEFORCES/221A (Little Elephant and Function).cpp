#include <iostream>
using namespace std;

int main()
{
    int X, i;
    cin >> X;
    if (X == 1)
    {
        cout << "1";
    }
    else
    {
        cout << X << " ";
        for (i = 1; i < X; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
