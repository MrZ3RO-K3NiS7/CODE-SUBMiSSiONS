#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, sum = 0;
    char str[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (str[0] == 'T')
        {
            sum = sum + 4;
        }
        else if (str[0] == 'C')
        {
            sum = sum + 6;
        }
        else if (str[0] == 'O')
        {
            sum = sum + 8;
        }
        else if (str[0] == 'D')
        {
            sum = sum + 12;
        }
        else if (str[0] == 'I')
        {
            sum = sum + 20;
        }
    }
    printf("%d", sum);
    
    return 0;
}
