#include <stdio.h>
#include <string.h>

int main()
{
    int t, flag = 0;
    scanf("%d", &t);
    while (t--)
    {
        char str[111];
        scanf("%s", str);
        if (strcmp(str, "and") == 0 || strcmp(str, "not") == 0 || strcmp(str, "that") == 0 || strcmp(str, "the") == 0 || strcmp(str, "you") == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
