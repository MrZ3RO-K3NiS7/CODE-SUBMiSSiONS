class Solution {
private:
    vector<int> nextSmallerEle(vector<int> &arr, int n)
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
    vector<int> prevSmallerEle(vector<int> &arr, int n)
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
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next = nextSmallerEle(heights, n);
        vector<int> prev = prevSmallerEle(heights, n);
        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int L = heights[i];
            if (next[i] == -1)
                next[i] = n;
            int B = next[i] - prev[i] - 1;
            int newArea = L * B;
            area = max(area, newArea);
        }
        return area;
    }
public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        if (matrix.empty())
            return 0;
        int N = matrix.size();
        int M = matrix[0].size();
        vector<int> heights(M, 0);
        int area = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (matrix[i][j] == '0')
                    heights[j] = 0;
                else
                    heights[j] += 1;
            }
            area = max(area, largestRectangleArea(heights));
        }
        return area;
    }
};
