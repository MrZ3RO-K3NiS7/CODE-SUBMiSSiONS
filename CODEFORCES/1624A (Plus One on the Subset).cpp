#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, N, i, MX, MN;
    cin >> t;
    while (t--)
    {
        cin >> N;

        int arr[N];

        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        MX = *max_element(arr, arr + N);
        MN = *min_element(arr, arr + N);

        cout << MX - MN << endl;
    }
    return 0;
}
