#include <stdio.h>

int main()
{
    int N, i, Fact = 1;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        Fact = Fact * i;
    }
    printf("%d", Fact);
    return 0;
}
