#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, x, y;
    char str[24];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        for (j = 0; j < 6; j++)
        {
            x = str[0] + str[1] + str[2];
            y = str[3] + str[4] + str[5];
        }
        if (x == y)
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
