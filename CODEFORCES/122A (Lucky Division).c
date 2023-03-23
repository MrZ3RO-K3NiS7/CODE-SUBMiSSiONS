#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, X, C = 0;
    char N[1111];
    scanf("%s", N);
    for (i = 0; N[i] != '\0'; i++)
    {
        if (N[i] == '4' || N[i] == '7')
        {
            C++;
        }
    }
    if (C == strlen(N))
    {
        printf("YES");
    }
    else
    {
        X = atoi(N);
        if (X % 4 == 0 || X % 7 == 0 || X % 47 == 0 || X % 74 == 0 || X % 447 == 0 || X % 474 == 0 || X % 477 == 0 || X % 747 == 0 || X % 774 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
