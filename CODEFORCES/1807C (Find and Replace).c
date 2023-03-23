#include <stdio.h>
#include <string.h>

int main()
{
    int t, N, i, j;
    char str[2222];
    scanf("%d", &t);
    while (t--)
    {
        int C = 0;
        scanf("%d", &N);
        scanf("%s", str);
        for (i = 0; i < N; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                if (str[i] == str[j] && ((i % 2 == 0 && j % 2 != 0) || (j % 2 == 0 && i % 2 != 0)))
                {
                    C = 1;
                }
            }
        }
        if (C == 0)
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
