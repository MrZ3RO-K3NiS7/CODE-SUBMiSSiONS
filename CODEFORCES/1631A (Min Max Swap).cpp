#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    ll t, N, i, MXarr, MXars;
    cin >> t;
    while (t--)
    {
        cin >> N;
        int arr[N], ars[N];
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < N; i++)
        {
            cin >> ars[i];
        }
        for (i = 0; i < N; i++)
        {
            if (arr[i] > ars[i])
            {
                swap(arr[i], ars[i]);
            }
        }
        MXarr = *max_element(arr, arr + N);
        MXars = *max_element(ars, ars + N);
        cout << MXarr * MXars << endl;
    }
    See_U_Again___BYE
}
