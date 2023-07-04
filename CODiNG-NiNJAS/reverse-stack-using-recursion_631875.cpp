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
