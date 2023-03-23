#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, x = 0, y = 0;
    char str[111111];
    scanf("%d", &n);
    scanf("%s", str);
    for (i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if (x > y)
    {
        printf("Anton");
    }
    else if (x < y)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
