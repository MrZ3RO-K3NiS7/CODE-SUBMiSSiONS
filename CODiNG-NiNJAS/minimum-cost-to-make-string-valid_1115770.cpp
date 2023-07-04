#include <bits/stdc++.h>
int findMinimumCost(string str)
{
    if (str.size() % 2 != 0)
        return -1;
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '{')
            st.push(ch);
        else
        {
            if (!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }
    }
    int O = 0, C = 0;
    while (!st.empty())
    {
        if (st.top() == '{')
            O++;
        else
            C++;
        st.pop();
    }
    int ans = (O + 1) / 2 + (C + 1) / 2;
    return ans;
}
