// METHOD 1 !!!

void insertAtBottom(stack<int> &stack, int temp)
{
    if (stack.empty())
    {
        stack.push(temp);
        return;
    }
    int itemp = stack.top();
    stack.pop();
    insertAtBottom(stack, temp);
    stack.push(itemp);
}
void reverseStack(stack<int> &stack)
{
    if (stack.empty())
        return;
    int temp = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, temp);
}



// METHOD 2 !!!

void reverseStack(stack<int> &Stk)
{
    if (Stk.empty())
        return;
    int temp = Stk.top();
    Stk.pop();
    reverseStack(Stk);
    stack<int> tempStk;
    while (!Stk.empty())
    {
        tempStk.push(Stk.top());
        Stk.pop();
    }
    tempStk.push(temp);
    while (!tempStk.empty())
    {
        Stk.push(tempStk.top());
        tempStk.pop();
    }
}
