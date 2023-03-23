#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, i, j;
    char str[101];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", str);
        for (j = 0; str[j]; j++)
        {
            str[j] = toupper(str[j]);
        }
        if (strcmp(str, "YES") == 0)
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
