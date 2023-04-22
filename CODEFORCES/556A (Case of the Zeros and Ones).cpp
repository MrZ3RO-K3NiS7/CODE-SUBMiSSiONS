#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define str string
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    int T, i, Z = 0, O = 0, MN;
    cin >> T;
    str N;
    cin >> N;
    for (i = 0; N[i] != '\0'; i++)
    {
        if (N[i] == '0')
        {
            Z++;
        }
        else
        {
            O++;
        }
    }
    MN = min(Z, O);
    cout << T - (MN * 2);
    See_U_Again___BYE
}
