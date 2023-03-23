#include <stdio.h>
#include <string.h>

int main()
{
    int n, t, i, j, temp;
    scanf("%d %d", &n, &t);
    char str[111];
    scanf("%s", str);
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                j++;
            }
        }
    }
    printf("%s", str);

    return 0;
}
