#include <stdio.h>
#include <string.h>

int main()
{
    char t[777];
    char s[777];
    scanf("%s", t);
    scanf("%s", s);
    if (strcmp(strrev(s), t) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
