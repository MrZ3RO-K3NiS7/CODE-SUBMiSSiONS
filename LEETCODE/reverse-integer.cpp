class Solution
{
public:
    int reverse(int x)
    {
        int solve = 0;
        while (x != 0)
        {
            int D = x % 10;
            if ((solve > INT_MAX / 10) || (solve < INT_MIN / 10))
            {
                return 0;
            }
            solve = (solve * 10) + D;
            x = x / 10;
        }
        return solve;
    }
};
