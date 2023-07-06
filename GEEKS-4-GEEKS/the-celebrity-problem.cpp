class Solution
{
private:
    bool knows(vector<vector<int>> &M, int n, int X, int Y)
    {
        if (M[X][Y] == 0)
            return false;
        else
            return true;
    }
public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> stk;
        for (int i = 0; i < n; i++)
            stk.push(i);
        while (stk.size() > 1)
        {
            int X = stk.top();
            stk.pop();
            int Y = stk.top();
            stk.pop();
            if (knows(M, n, X, Y))
                stk.push(Y);
            else
                stk.push(X);
        }
        int ans = stk.top();
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
            if (M[ans][i] == 0)
                zeroCount++;
        if (zeroCount != n)
            return -1;
        int oneCount = 1;
        for (int i = 0; i < n; i++)
            if (M[i][ans] == 1)
                oneCount++;
        if (oneCount != n)
            return -1;
        return ans;
    }
};
