#include <iostream>
using namespace std;

int main()
{
    int X, Y, C;
    cin >> X >> Y;
    for (int i = 1;; i++)
    {
        C = X * i;
        if (C % 10 == 0 || C % 10 == Y)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
