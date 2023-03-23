#include <stdio.h>

int main()
{
    double X, Y, Z = 0;
    int N;
    scanf("%d", &N);
    X = N;
    while (N--)
    {
        scanf("%lf", &Y);
        Z = Z + Y;
    }
    printf("%0.12f", Z / X);

    return 0;
}
