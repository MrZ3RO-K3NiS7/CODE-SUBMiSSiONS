#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char str[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        printf("%d\n", (str[0] + str[2] - 96));
    }
    return 0;
}
