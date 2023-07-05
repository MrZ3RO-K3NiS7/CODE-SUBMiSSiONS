class MinStack {
public:
    stack<int> Stk;
    stack<int> mnStk;
    MinStack()
    {
    }
    void push(int val)
    {
        if (Stk.empty())
        {
            Stk.push(val);
            mnStk.push(val);
            return;
        }
        Stk.push(val);
        mnStk.push(min(mnStk.top(), val));
    }
    void pop()
    {
        if (!Stk.empty())
        {
            Stk.pop();
            mnStk.pop();
        }
    }
    int top()
    {
        return Stk.top();
    }
    int getMin()
    {
        return mnStk.top();
    }
};
