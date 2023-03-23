#include <iostream>
using namespace std;

int main()
{
    int N, i, X, Sum = 0, j, Count = 0;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> X;
        Sum = Sum + X;
    }
    for (j = 1; j <= 5; j++)
    {
        if ((Sum + j) % (N + 1) != 1)
        {
            Count++;
        }
    }
    cout << Count;

    return 0;
}
