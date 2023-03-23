#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, x, j;
    char str[105];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int max = 0;
        scanf("%d", &x);
        scanf("%s", str);
        for (j = 0; j < x; j++)
        {
            if (str[j] > max)
            {
                max = str[j];
            }
        }
        printf("%d\n", max - 96);
    }
    return 0;
}
