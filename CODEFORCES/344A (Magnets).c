#include <stdio.h>

int main()
{
    int t, i, arr[111111], Count = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < t; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            Count++;
        }
    }
    printf("%d\n", Count);

    return 0;
}
