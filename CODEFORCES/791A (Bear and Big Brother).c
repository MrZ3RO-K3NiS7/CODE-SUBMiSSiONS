#include <stdio.h>

int main()
{
    int A, B, count = 0;
    scanf("%d %d", &A, &B);
    while (1)
    {
        A = A * 3;
        B = B * 2;
        count++;
        if (A > B)
        {
            break;
        }
    }
    printf("%d", count);

    return 0;
}
