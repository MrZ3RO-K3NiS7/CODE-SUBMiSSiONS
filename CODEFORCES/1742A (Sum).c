#include <stdio.h>

int main()
{
    int n, i, a, b, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b + c || b == c + a || c == a + b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
