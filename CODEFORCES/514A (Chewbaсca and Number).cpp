#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    str S;
    cin >> S;
    for (int i = 0; i < S.size();i++)
    {
        if((S[i]-'0') > (9-(S[i])+'0') && (S[0]-'0') != 9)
        {
            S[i] = (9-(S[i])+'0');
        }
        else
        {
            S[i]=S[i]-'0';
        }
        cout << S[i]-'\0';
    }
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
