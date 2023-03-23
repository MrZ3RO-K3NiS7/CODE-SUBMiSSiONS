#include <iostream>
using namespace std;

int main()
{
    int N, i, j;
    cin >> N;
    for (i = 0; i <= N; i++)
    {
        for (j = N - i; j > 0; j--)
        {
            cout << " "
                 << " ";
        }
        if (i == 0)
        {
            cout << "0";
        }
        for (j = 0; j <= i; j++)
        {
            if (i != 0)
            {
                cout << j << " ";
            }
        }
        for (j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j > 0 && j < i)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (i = N - 1; i >= 0; i--)
    {
        for (j = N - i; j > 0; j--)
        {
            cout << " "
                 << " ";
        }
        for (j = 0; j <= i; j++)
        {
            if (i != 0)
            {
                cout << j << " ";
            }
        }
        if (i == 0)
        {
            cout << "0";
        }
        for (j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j > 0 && j < i)
            {
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
