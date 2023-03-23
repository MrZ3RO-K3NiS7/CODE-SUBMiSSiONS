#include <stdio.h>

int main()
{
    int t, i, a, b, c, x, y;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        x = (a - 1);
        if (b < c)
        {
            y = (c - b) + (c - 1);
        }
        else
        {
            y = (b - 1);
        }
        if (x < y)
        {
            printf("1\n");
        }
        else if (x > y)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}
