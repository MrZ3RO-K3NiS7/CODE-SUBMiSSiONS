#include <iostream>
using namespace std;

int main()
{
    int t, i, N, X;
    cin >> t;
    while (t--)
    {
        int E = 0, O = 0;
        cin >> N;
        for (i = 0; i < N; i++)
        {
            cin >> X;
            if (X % 2 == 0)
            {
                E++;
            }
            else
            {
                O++;
            }
        }
        if (E >= O && (O % 2 == 0) || (O % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
