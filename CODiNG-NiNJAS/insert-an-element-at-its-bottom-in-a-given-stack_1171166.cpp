// RECURSiON !!!

#include <bits/stdc++.h>
void solve(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int temp = myStack.top();
    myStack.pop();
    solve(myStack, x);
    myStack.push(temp);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}



// NO NEED RECURSiON !!!

#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> newSt;
    while (!myStack.empty())
    {
        newSt.push(myStack.top());
        myStack.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        myStack.push(newSt.top());
        newSt.pop();
    }
    return myStack;
}
