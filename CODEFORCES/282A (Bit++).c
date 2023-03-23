#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, plus = 0, minus = 0;
    char str[105];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        if (strstr(str, "++X") || strstr(str, "X++"))
        {
            plus++;
        }
        else if (strstr(str, "X--") || strstr(str, "--X"))
        {
            minus++;
        }
    }
    printf("%d", plus - minus);

    return 0;
}
