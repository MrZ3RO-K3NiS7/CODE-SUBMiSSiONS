#include <stdio.h>
#include <string.h>

int main()
{
    int N, M, i, j, count = 0;
    scanf("%d %d", &N, &M);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            char str[4];
            scanf("%s", str);
            if (str[0] == 'C' || str[0] == 'M' || str[0] == 'Y')
            {
                count++;
            }
        }
    }
    if (count >= 1)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White");
    }
    return 0;
}
