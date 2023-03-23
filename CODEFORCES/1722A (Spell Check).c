#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, n, j;
    char str[20];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, countx = 0;
        scanf("%d", &n);
        scanf("%s", str);
        for (j = 0; j < n; j++)
        {
            if (str[j] == 'T')
            {
                count1++;
            }
            else if (str[j] == 'i')
            {
                count2++;
            }
            else if (str[j] == 'm')
            {
                count3++;
            }
            else if (str[j] == 'u')
            {
                count4++;
            }
            else if (str[j] == 'r')
            {
                count5++;
            }
            else
            {
                countx++;
            }
        }
        if (count1 == 1 && count2 == 1 && count3 == 1 && count4 == 1 && count5 == 1 && countx == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
