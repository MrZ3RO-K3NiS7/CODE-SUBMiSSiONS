#include <stdio.h>

int main()
{
    int i;
    char c[777];
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == '.')
        {
            printf("0");
        }
        else if (c[i + 1] == '.')
        {
            printf("1");
            i++;
        }
        else
        {
            printf("2");
            i++;
        }
    }
    return 0;
}
