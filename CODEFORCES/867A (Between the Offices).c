#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, CS = 0, CF = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n; i++)
    {
        if (str[i] == 'F' && str[i + 1] == 'S')
        {
            CS++;
        }
        else if (str[i] == 'S' && str[i + 1] == 'F')
        {
            CF++;
        }
    }
    if (CF > CS)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
