#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, i, U = 0, D = 0, R = 0, L = 0, X, Y;
    cin >> N;
    string str;
    cin >> str;
    for (i = 0; i < N; i++)
    {
        if (str[i] == 'U')
        {
            U++;
        }
        if (str[i] == 'D')
        {
            D++;
        }
        if (str[i] == 'R')
        {
            R++;
        }
        if (str[i] == 'L')
        {
            L++;
        }
    }
    if (U > D)
    {
        X = 2 * D;
    }
    else
    {
        X = 2 * U;
    }
    if (R > L)
    {
        Y = 2 * L;
    }
    else
    {
        Y = 2 * R;
    }
    cout << X + Y;

    return 0;
}
