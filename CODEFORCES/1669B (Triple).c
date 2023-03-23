#include <stdio.h>

int main()
{
    int t, i, n, j, x;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int count = -1;
        int arr[200002] = {};
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x);
            arr[x]++;
            if (arr[x] >= 3)
            {
                count = x;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
