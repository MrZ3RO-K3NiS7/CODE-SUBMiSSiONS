class Solution {
public:
    void rotate(vector<int> &nums, int k)
    {
        int X = nums.size();
        vector<int> temp(X);
        for (int i = 0; i < X; i++)
        {
            temp[(i + k) % X] = nums[i];
        }
        nums = temp;
    }
};
