#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, N, i, j, X;
    cin >> t;
    while (t--)
    {
        cin >> N;
        int arr[N];
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        int Mark = 0;
        for (i = 0; i < N; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                X = abs(arr[i] - arr[j]);
                if (X <= 1)
                {
                    Mark++;
                    break;
                }
            }
        }
        if (Mark == (N - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
