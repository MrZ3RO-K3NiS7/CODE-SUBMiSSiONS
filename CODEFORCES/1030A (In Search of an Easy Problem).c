#include <stdio.h>

int main()
{
    int n, i, x, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
