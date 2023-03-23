#include <stdio.h>

int main()
{
    int n, i, x, y, m = 0, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            m++;
        }
        else if (y > x)
        {
            c++;
        }
    }
    if (m > c)
    {
        printf("Mishka");
    }
    else if (c > m)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}
