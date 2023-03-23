#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    char str[105];
    scanf("%s", str);
    int X = atoi(str) + 1;
    for (i = X ;; i++)
    {
        sprintf(str, "%d", i);
        if (str[0] != str[1] && str[0] != str[2] && str[0] != str[3] && str[1] != str[2] && str[1] != str[3] && str[2] != str[3])
        {
            printf("%s", str);
            break;
        }
    }
    return 0;
}
