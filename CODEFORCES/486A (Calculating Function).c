#include <stdio.h>

int main()
{
    long long int N, Sum = 0;
    scanf("%lld", &N);
    if (N % 2 == 0)
    {
        Sum = (N / 2);
    }
    else
    {
        Sum = ((N + 1) / 2) * (-1);
    }
    printf("%lld", Sum);

    return 0;
}
