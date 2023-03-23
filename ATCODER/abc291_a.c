#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int i;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%d", i + 1);
        }
    }
    return 0;
}
