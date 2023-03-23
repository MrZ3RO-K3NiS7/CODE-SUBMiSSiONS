#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char str[72];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
