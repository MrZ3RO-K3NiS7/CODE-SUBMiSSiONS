class Solution {
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        vector<int> idx;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (nums[mid] == target)
            {
                idx.push_back(mid);
                break;
            }
            else if (nums[mid] < target)
                left = mid + 1;
            else if (nums[mid] > target)
                right = mid - 1;
        }
        if (idx.size() == 0)
            return idx;
        int temp_mid = mid;
        mid--;
        while (mid >= 0 && nums[mid] == target)
        {
            idx.push_back(mid);
            mid--;
        }
        mid = temp_mid;
        mid++;
        while (mid < nums.size() && nums[mid] == target)
        {
            idx.push_back(mid);
            mid++;
        }
        sort(idx.begin(), idx.end());
        return idx;
    }
};
