#include <stdio.h>

int main()
{
    int x, y, i, count = 0, j, k;
    scanf("%d %d", &x, &y);
    for (i = 2; i < y; i++)
    {
        if (y % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        for (k = x + 1; k < y; k++)
        {
            int countkj = 0;
            for (j = 2; j < k; j++)
            {
                if (k % j == 0)
                {
                    countkj++;
                }
            }
            if (countkj == 0)
            {
                break;
            }
        }
        if (k == y)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
