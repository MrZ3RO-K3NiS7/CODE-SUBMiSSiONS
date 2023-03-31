#include <iostream>
using namespace std;

int main()
{
    int t, N, i, arr[111111];
    cin >> t;
    while (t--)
    {
        cin >> N;
        for (i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }
        for (i = 1; i <= N; i++)
        {
            if ((arr[1] != arr[2]) && (arr[2] == arr[3]))
            {
                cout << 1 << endl;
                break;
            }
            else if ((arr[N - 2] == arr[N - 1]) && (arr[N - 1] != arr[N]))
            {
                cout << N << endl;
                break;
            }
            else if ((arr[i - 1] != arr[i]) && (arr[i] != arr[i + 1]) && (arr[i - 1] == arr[i + 1]))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
