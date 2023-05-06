#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    ll N, i;
    cin >> N;
    vector<int> v(N);
    for (i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    int max_mark = 0, curr_mark = 0;
    for (i = 0; i < N; i++)
    {
        if (v[i] == 0)
        {
            curr_mark++;
        }
        else
        {
            if (curr_mark > max_mark)
            {
                max_mark = curr_mark;
            }
            curr_mark = 0;
        }
    }
    if (curr_mark > max_mark)
    {
        max_mark = curr_mark;
    }
    cout << max_mark << endl;
}

Nice_To_Meet_U
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    See_U_Again___BYE
}
