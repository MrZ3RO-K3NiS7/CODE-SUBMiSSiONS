#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char str[222];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'A' && str[i] != 'a' && str[i] != 'O' && str[i] != 'o' && str[i] != 'Y' && str[i] != 'y' && str[i] != 'E' && str[i] != 'e' && str[i] != 'U' && str[i] != 'u' && str[i] != 'I' && str[i] != 'i')
        {
            printf(".%c", tolower(str[i]));
        }
    }
    return 0;
}
