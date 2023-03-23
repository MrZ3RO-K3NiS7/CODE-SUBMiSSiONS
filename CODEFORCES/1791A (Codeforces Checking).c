#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    char str[4];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", str);
        if (strstr("codeforces", str))
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
