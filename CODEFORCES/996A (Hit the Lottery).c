#include <stdio.h>

int main()
{
    int n;
    int x, y, z, p, q;
    
    scanf("%d", &n);

    x = n / 100;
    n = n - (x * 100);
    y = n / 20;
    n = n - (y * 20);
    z = n / 10;
    n = n - (z * 10);
    p = n / 5;
    n = n - (p * 5);
    q = n / 1;
    n = n - (q * 1);

    printf("%d", x + y + z + p + q);

    return 0;
}
