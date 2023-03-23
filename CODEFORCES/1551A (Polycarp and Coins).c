#include <stdio.h>

int main()
{
    int N, i, X;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        if (X % 3 == 0)
        {
            printf("%d %d\n", X / 3, X / 3);
        }
        else
        {
            if (X % 3 == 1)
            {
                printf("%d %d\n", X / 3 + 1, X / 3);
            }
            else if (X % 3 == 2)
            {
                printf("%d %d\n", X / 3, X / 3 + 1);
            }
        }
    }
    return 0;
}
