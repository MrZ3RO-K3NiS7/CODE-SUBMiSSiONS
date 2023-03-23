#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, n, count=0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    char ch;
    for (ch='A'; ch<='Z'; ch++)
    {
        for (i=0; i<n; i++)
        {
            if (ch==toupper(str[i]))
            {
                count++;
                break;
            }
        }
    }
    if (count>=26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
