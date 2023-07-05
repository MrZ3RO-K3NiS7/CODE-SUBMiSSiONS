class Solution {
private:
    vector<int> nextSmallerEle(vector<int> arr, int n)
    {
        stack<int> ns;
        ns.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            int temp = arr[i];
            while (ns.top() != -1 && arr[ns.top()] >= temp)
                ns.pop();
            ans[i] = ns.top();
            ns.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerEle(vector<int> arr, int n)
    {
        stack<int> ps;
        ps.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i];
            while (ps.top() != -1 && arr[ps.top()] >= temp)
                ps.pop();
            ans[i] = ps.top();
            ps.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerEle(heights, n);
        vector<int> prev(n);
        prev = prevSmallerEle(heights, n);
        int Area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int L = heights[i];
            if (next[i] == -1)
                next[i] = n;
            int B = next[i] - prev[i] - 1;
            int newArea = L * B;
            Area = max(Area, newArea);
        }
        return Area;
    }
};
