#include <iostream>
using namespace std;

int main()
{
    int i, j, t, N, arr[111], MN;
    cin >> t;
    while (t--)
    {
        int C = 0;
        cin >> N;
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        MN = arr[0];
        for (i = 1; i < N; i++)
        {
            if (arr[i] < MN)
            {
                MN = arr[i];
            }
        }
        for (i = 0; i < N; i++)
        {
            if (arr[i] != MN)
            {
                C++;
            }
        }
        cout << C << endl;
    }
    return 0;
}
