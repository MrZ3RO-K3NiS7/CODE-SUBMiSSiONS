#include <bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[i];
        while (st.top() >= temp)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(temp);
    }
    return ans;
}
