#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, N, C = 0;
    gets(s);
    N = strlen(s);
    for (i = 0; i < N / 2; i++)
    {
        if (s[i] == s[N - i - 1])
        {
            C++;
        }
    }
    if (C == i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
