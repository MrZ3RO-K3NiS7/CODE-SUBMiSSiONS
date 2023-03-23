#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[105];
    char srr[105];
    scanf("%s %s", str, srr);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == srr[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
