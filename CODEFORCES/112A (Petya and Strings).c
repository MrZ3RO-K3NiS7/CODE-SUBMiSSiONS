#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int count = 0;
    char str[124];
    char srr[124];
    scanf("%s", str);
    scanf("%s", srr);
    if (strcmp(strlwr(str), strlwr(srr)) > 0)
    {
        count = 1;
    }
    if (strcmp(strlwr(str), strlwr(srr)) < 0)
    {
        count = -1;
    }
    if (strcmp(strlwr(str), strlwr(srr)) == 0)
    {
        count = 0;
    }
    printf("%d", count);

    return 0;
}
