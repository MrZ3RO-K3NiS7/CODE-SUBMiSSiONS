#include <stdio.h>

int main()
{
    int n, i, x, y, p, q;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        p = 100 - (100 / 100 * x);
        q = 200 - (200 / 100 * y);
        if (p > q)
        {
            printf("SECOND\n");
        }
        else if (p < q)
        {
            printf("FIRST\n");
        }
        else
        {
            printf("BOTH\n");
        }
    }
    return 0;
}
