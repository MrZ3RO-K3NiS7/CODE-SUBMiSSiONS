#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, R, O, X;
    cin >> t;
    while (t--)
    {
        cin >> R >> O;
        X = O * 6 * 6;
        if (X >= R)
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
