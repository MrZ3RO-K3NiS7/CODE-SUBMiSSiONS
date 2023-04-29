#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    int X, Y, i, j, Mark = 0, Z = 0;
    cin >> X;
    int arr[X];
    for (i = 0; i < X; i++)
    {
        cin >> arr[i];
    }
    cin >> Y;
    int ars[Y];
    for (i = 0; i < Y; i++)
    {
        cin >> ars[i];
    }
    sort(arr, arr + X);
    sort(ars, ars + Y);
    int MN = min(X, Y);
    for (i = 0; i < X; i++)
    {
        for (j = Z; j < Y; j++)
        {
            if (arr[i] == ars[j] || arr[i] == ars[j] + 1 || arr[i] == ars[j] - 1)
            {
                Mark++;
                Z = j + 1;
                break;
            }
        }
    }
    cout << Mark << endl;

    See_U_Again___BYE
}
