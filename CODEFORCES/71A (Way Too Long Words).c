#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        int count = 0;
        char str[111];
        scanf("%s", str);
        for (j = 0; str[j] != '\0'; j++)
        {
            count++;
        }
        int X = count;
        if (X <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            printf("%c%d%c\n", str[0], X - 2, str[X - 1]);
        }
    }
    return 0;
}
