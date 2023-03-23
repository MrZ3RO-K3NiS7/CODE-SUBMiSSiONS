#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int i, j, count = 0, x;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                break;
            }
        }
    }
    x = strlen(str) - count;
    if (x % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
