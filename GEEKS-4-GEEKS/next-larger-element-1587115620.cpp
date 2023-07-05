class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        stack<long long> stk;
        stk.push(-1);
        vector<long long> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            long long temp = arr[i];
            while (stk.top() != -1 && stk.top() <= temp)
                stk.pop();
            ans[i] = stk.top();
            stk.push(temp);
        }
        return ans;
    }
};
