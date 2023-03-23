#include <stdio.h>

int main()
{
    int n, i;
    int arr[111111];
    int Count = 1, X = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            Count++;
        }
        if (Count > X)
        {
            X = Count;
        }
        if (arr[i] > arr[i + 1])
        {
            Count = 1;
        }
    }
    if (Count > X)
    {
        X = Count;
    }
    printf("%d", X);

    return 0;
}
