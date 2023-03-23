#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    int n, i, x, count = 0;
    scanf("%s", str);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }
    x = n - count;
    for (i = 0; i < n; i++)
    {
        if (x > count)
        {
            printf("%c", toupper(str[i]));
        }
        else if (x < count || x == count)
        {
            printf("%c", tolower(str[i]));
        }
    }
    return 0;
}
