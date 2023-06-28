class Solution
{
public:
    int findSum(int A[], int N)
    {
        int MX = *max_element(A, A + N);
        int MN = *min_element(A, A + N);
        return MX + MN;
    }
};
