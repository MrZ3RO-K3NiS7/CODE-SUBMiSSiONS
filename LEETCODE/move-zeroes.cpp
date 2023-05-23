class Solution {
public:
    void moveZeroes(vector<int> &nums)
    {
        int NonZero = 0;
        for (int Zero = 0; Zero < nums.size(); Zero++)
        {
            if (nums[Zero] != 0)
            {
                swap(nums[Zero], nums[NonZero]);
                NonZero++;
            }
        }
    }
};
