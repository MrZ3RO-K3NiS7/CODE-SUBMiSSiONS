#include <stdio.h>

int main()
{
    int n;
    int x, y, z, p, q;

    scanf("%d", &n);

    x = n / 5;
    n = n - (x * 5);
    y = n / 4;
    n = n - (y * 4);
    z = n / 3;
    n = n - (z * 3);
    p = n / 2;
    n = n - (p * 2);
    q = n / 1;
    n = n - (q * 1);

    printf("%d", x + y + z + p + q);

    return 0;
}
