#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, count = 0;
    scanf("%d", &t);
    char str[54];
    scanf("%s", str);
    for (i = 0; i < t; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
