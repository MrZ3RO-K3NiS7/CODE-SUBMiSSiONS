class MyStack {
public:
    queue<int> Q;
    MyStack()
    {
    }
    void push(int x)
    {
        Q.push(x);
    }
    int pop()
    {
        queue<int> nQ;
        int last;
        while (!Q.empty())
        {
            int k = Q.front();
            Q.pop();
            if (Q.empty())
            {
                last = k;
                break;
            }
            nQ.push(k);
        }
        Q = nQ;
        return last;
    }
    int top()
    {
        queue<int> nQ;
        int top;
        while (!Q.empty())
        {
            int k = Q.front();
            Q.pop();
            if (Q.empty())
            {
                top = k;
            }
            nQ.push(k);
        }
        Q = nQ;
        return top;
    }
    bool empty()
    {
        return Q.empty();
    }
};
