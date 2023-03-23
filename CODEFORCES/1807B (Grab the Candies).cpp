#include <iostream>
using namespace std;

int main()
{
    int t, N, X;
    cin >> t;
    while (t--)
    {
        int O = 0, E = 0;
        cin >> N;
        while (N--)
        {
            cin >> X;
            if (X % 2 == 0)
            {
                E = E + X;
            }
            else
            {
                O = O + X;
            }
        }
        if (E > O)
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
