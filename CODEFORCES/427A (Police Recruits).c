#include <stdio.h>

int main()
{
    int n, i, X, Police = 0, Crime = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &X);
        if (X > 0)
        {
            Police = Police + X;
        }
        else
        {
            if (Police < 1)
            {
                ++Crime;
            }
            else
            {
                --Police;
            }
        }
    }
    printf("%d", Crime);

    return 0;
}
