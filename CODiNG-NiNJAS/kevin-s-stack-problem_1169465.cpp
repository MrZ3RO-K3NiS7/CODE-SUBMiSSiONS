#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> Stk;
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < s.size(); i++)
            Stk.push(s[i]);
        string ans = "";
        while (!Stk.empty())
        {
            char c = Stk.top();
            ans.push_back(c);
            Stk.pop();
        }
        return ans;
    }
}
