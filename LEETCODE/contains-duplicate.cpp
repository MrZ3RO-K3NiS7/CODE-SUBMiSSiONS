class Solution {
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int X = nums.size();
        int Y = set<int>(nums.begin(), nums.end()).size();
        if (X == Y)
        {
            return false;
        }
        return true;
    }
};
