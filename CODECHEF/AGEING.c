#include <stdio.h>

int main()
{
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        printf("%d\n", x - 10);
    }
    return 0;
}
