#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp;
    char str[105];
    char srr[105];
    char stt[105];
    scanf("%s %s %s", str, srr, stt);
    strcat(str, srr);
    int len = strlen(str);
    int lenX = strlen(stt);
    if (len == lenX)
    {
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < len - i - 1; j++)
            {
                if (str[j] > str[j + 1])
                {
                    temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < lenX; i++)
        {
            for (j = 0; j < lenX - i - 1; j++)
            {
                if (stt[j] > stt[j + 1])
                {
                    temp = stt[j];
                    stt[j] = stt[j + 1];
                    stt[j + 1] = temp;
                }
            }
        }
    }
    if (strcmp(str, stt) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
