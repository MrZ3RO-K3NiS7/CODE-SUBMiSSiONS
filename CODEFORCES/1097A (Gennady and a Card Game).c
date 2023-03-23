#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char str[24];
    char srr[24];
    scanf("%s", str);
    for (i = 0; i < 5; i++)
    {
        scanf("%s", srr);
        if (str[0] == srr[0] || str[0] == srr[1] || str[1] == srr[0] || str[1] == srr[1])
        {
            count = 1;
            break;
        }
        else
        {
            count = 0;
        }
    }
    if (count == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
