#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, i, X = 0, Sum = 0;
    cin >> N;
    int arr[N];
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
        X = max(X, arr[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] < X)
        {
            Sum = Sum + (X - arr[i]);
        }
    }
    cout << Sum << endl;

    return 0;
}
