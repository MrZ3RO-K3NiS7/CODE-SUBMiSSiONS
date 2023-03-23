#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    if (strstr(str, "H") || strstr(str, "Q") || strstr(str, "9"))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
