class Solution {
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            int left = 0;
            int right = grid[i].size() - 1;
            int count = 0;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (grid[i][mid] < 0)
                {
                    count = grid[i].size() - mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            sum += count;
        }
        return sum;
    }
};
