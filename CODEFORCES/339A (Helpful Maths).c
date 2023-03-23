#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp = 0;
    char str[105];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j + 1] != '\0'; j = j + 2)
        {
            if (str[j] > str[j + 2])
            {
                temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
            }
        }
    }
    printf("%s", str);

    return 0;
}
