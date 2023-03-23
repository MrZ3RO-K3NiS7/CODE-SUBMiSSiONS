#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    if (strstr(str, "1111111") || strstr(str, "0000000"))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
