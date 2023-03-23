#include <iostream>
using namespace std;

int main()
{
    int N, i, j, arr[333], X, Y, Z, C = 0;
    cin >> N;
    cin >> X;
    for (i = 0; i < X; i++)
    {
        cin >> arr[i];
    }
    cin >> Y;
    Z = X + Y;
    for (i = X; i < Z; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 0; j < Z; j++)
        {
            if (arr[j] == i)
            {
                C++;
                if (C == N)
                {
                    C = 1;
                }
                break;
            }
        }
    }
    if (C == 1)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}
