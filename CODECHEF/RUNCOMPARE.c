#include <stdio.h>

int main()
{
    int t, i, arr[111], x, ars[111];
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int count = 0;
        scanf("%d", &x);
        for (i = 0; i < x; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < x; i++)
        {
            scanf("%d", &ars[i]);
        }
        for (i = 0; i < x; i++)
        {
            if (arr[i] * 2 >= ars[i] && ars[i] * 2 >= arr[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
