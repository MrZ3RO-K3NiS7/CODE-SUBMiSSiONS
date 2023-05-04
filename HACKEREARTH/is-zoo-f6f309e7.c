#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int len, X = 0, Y = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ('z' == str[i])
        {
            X++;
        }
        else if ('o' == str[i])
        {
            Y++;
        }
    }
    if (2 * X == Y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
