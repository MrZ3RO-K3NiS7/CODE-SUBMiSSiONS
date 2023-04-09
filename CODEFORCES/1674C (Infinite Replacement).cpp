#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    ll t, i, C, S;
    string str, srr;
    cin >> t;
    while (t--)
    {
        cin >> str >> srr;
        for (i = 0; srr[i] != 0; i++)
        {
            if (srr[i] == 'a')
            {
                break;
            }
        }
        if (srr[0] == 'a' && srr[1] == 0)
        {
            cout << 1 << endl;
        }
        else if (srr[i] == 'a')
        {
            cout << -1 << endl;
        }
        else
        {
            S = str.size();
            C = pow(2, S);
            cout << C << endl;
        }
    }
    return 0;
}
