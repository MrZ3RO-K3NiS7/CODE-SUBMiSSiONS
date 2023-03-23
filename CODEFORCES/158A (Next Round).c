#include <stdio.h>

int main()
{
    int i, x, n, k;
    int arr[100];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    x = arr[k - 1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x && arr[i] > 0)
        {
            count++;
        }
    }
    printf("%d ", count);

    return 0;
}
