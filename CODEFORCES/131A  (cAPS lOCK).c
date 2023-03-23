#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int x, i, count = 0;
    char str[1000];
    scanf("%s", str);
    x = strlen(str);
    for (i = 1; i <= x - 1; i++)
    {
        if ((str[i]) >= 'a' && (str[i]) <= 'z')
        {
            count++;
        }
    }
    if (count == 0)
    {
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            printf("%c", toupper(str[0]));
        }
        else
        {
            printf("%c", tolower(str[0]));
        }
        for (i = 1; i <= x - 1; i++)
        {
            printf("%c", tolower(str[i]));
        }
    }
    else
    {
        printf("%s", str);
    }
    return 0;
}
