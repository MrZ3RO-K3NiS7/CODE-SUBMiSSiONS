#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define See_U_Again___BYE return 0;

Nice_To_Meet_U
{
    int N, Sum = 0, Mark = 0;
    cin >> N;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    reverse(a, a + 12);
    while (Sum < N)
    {
        Sum = Sum + a[Mark];
        Mark++;
        if (Mark >= 12)
        {
            break;
        }
    }
    if (Sum >= N)
    {
        cout << Mark;
    }
    else
    {
        cout << "-1";
    }
    See_U_Again___BYE
}
