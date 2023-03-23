#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, X = 0, C = 0;
    char str[1111];
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            X++;
        }
    }
    for (i = 1; str[i] != '\0'; i = i + 3)
    {
        for (j = i + 3; str[j] != '\0'; j = j + 3)
            if (str[i] == str[j])
            {
                C++;
                break;
            }
    }
    printf("%d", X - C);

    return 0;
}
