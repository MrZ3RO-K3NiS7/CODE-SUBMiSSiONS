#include <bits/stdc++.h>
void sortedInsert(stack<int> &stack, int temp)
{
    if (stack.empty() || stack.top() < temp)
    {
        stack.push(temp);
        return;
    }
    int itemp = stack.top();
    stack.pop();
    sortedInsert(stack, temp);
    stack.push(itemp);
}
void sortStack(stack<int> &stack)
{
    if (stack.empty())
        return;
    int temp = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack, temp);
}
