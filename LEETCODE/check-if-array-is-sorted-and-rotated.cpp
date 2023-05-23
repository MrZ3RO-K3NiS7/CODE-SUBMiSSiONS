class Solution {
public:
    bool check(vector<int> &nums)
    {
        int Mark = 0;
        int X = nums.size();
        for (int i = 1; i < X; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                Mark++;
            }
        }
        if (nums[X - 1] > nums[0])
        {
            Mark++;
        }
        if (Mark <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
