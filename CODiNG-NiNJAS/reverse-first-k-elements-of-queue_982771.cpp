#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> Stk;
    for (int i = 0; i < k; i++)
    {
        Stk.push(q.front());
        q.pop();
    }
    while (!Stk.empty())
    {
        q.push(Stk.top());
        Stk.pop();
    }
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
