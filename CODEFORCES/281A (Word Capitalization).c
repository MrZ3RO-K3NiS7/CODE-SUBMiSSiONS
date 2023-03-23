#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char x, str[1000];
    scanf("%s", str);
    x = toupper(str[0]);
    printf("%c", x);
    for (i = 1; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
