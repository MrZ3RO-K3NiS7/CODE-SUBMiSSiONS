#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U          int main()
#define MRZ                     ios_base
#define ll                      long long
#define db                      double
#define ld                      long double
#define ull                     unsigned long long
#define str                     string
#define vc                      vector
#define pr                      pair
#define mp                      map
#define st                      set
#define qu                      queue
#define stk                     stack
#define pb                      push_back
#define pf                      push_front
#define all(X)                  X.begin(), X.end()
#define SOLN___XD               solution();
#define Never_Give_Up           ll t;cin >> t;
#define Trust_iN_Yourself       while (t--){solution();}
#define See_You_Again___BYEEE   return 0;

void sync()
{
    MRZ::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

unordered_map<char, int> sym = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

str isBalanced(str s)
{
    stk<char> X;
    for (char bracket : s)
    {
        if (sym[bracket] < 0)
        {
            X.push(bracket);
        }
        else
        {
            if (X.empty())
            {
                return "NO";
            }
            char top = X.top();
            X.pop();
            if (sym[top] + sym[bracket] != 0)
            {
                return "NO";
            }
        }
    }
    if (!X.empty())
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

Nice_To_Meet_U
{
    sync();

    Never_Give_Up

        while (t--)
    {
        str s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }

    See_You_Again___BYEEE
}
