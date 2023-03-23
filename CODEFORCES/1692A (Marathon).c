#include <stdio.h>

int main()
{
    int N, i, a, b, c, d;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        int count = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
