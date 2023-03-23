#include <stdio.h>

int main()
{
    int N, i, M, j, X;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        int odd = 0, even = 0, sum = 0;
        scanf("%d", &M);
        for (j = 0; j < M; j++)
        {
            scanf("%d", &X);
            if (X % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum = sum + X;
        }
        if (sum % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            if (odd > 0 && even > 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
