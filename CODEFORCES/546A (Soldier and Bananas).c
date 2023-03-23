#include <stdio.h>

int main()
{
    int k, n, w, i, C = 0;
    scanf("%d%d%d", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        C = C + k * i;
    }
    if (C > n)
    {
        printf("%d", C - n);
    }
    else
    {
        printf("0");
    }
    return 0;
}
