#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int N, X, i, Q, Z, Puzzle = INT_MAX;
    cin >> N >> X;
    int arr[X];
    for (i = 0; i < X; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + X);
    Q = X - N;
    for (i = 0; i <= Q; i++)
    {
        Z = arr[N - 1 + i] - arr[i];
        if (Z < Puzzle)
        {
            Puzzle = Z;
        }
    }
    cout << Puzzle;

    return 0;
}
