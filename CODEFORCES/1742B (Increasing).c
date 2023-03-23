#include <stdio.h>

int main()
{
    int t, i, n, j, k;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int count = 1;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            int arr[1024];
            scanf("%d", &arr[j]);
            for (k = 0; k < j; k++)
            {
                if (arr[k] == arr[j])
                {
                    count = 0;
                }
            }
        }
        if (count == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
