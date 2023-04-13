#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N, i, Sum = 0, X, Mark = 0;
    cin >> N;
    int arr[N];
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
        Sum = Sum + arr[i];
    }
    sort(arr, arr + N);
    reverse(arr, arr + N);
    X = ceil(Sum * 1.0 / 2);
    for (i = 0; i < N; i++)
    {
        X = X + arr[i];
        Mark++;
        if (X > Sum)
        {
            break;
        }
    }
    cout << Mark;

    return 0;
}
