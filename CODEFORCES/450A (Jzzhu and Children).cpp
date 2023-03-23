#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M, i, arr[105], Max = 0, X;
    cin >> N >> M;
    for (i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= N; i++)
    {
        arr[i] = ceil(arr[i] * 1.0 / M * 1.0);
        if (Max <= arr[i])
        {
            Max = arr[i];
            X = i;
        }
    }
    cout << X;

    return 0;
}
