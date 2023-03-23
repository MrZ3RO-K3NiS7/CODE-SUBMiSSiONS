#include <iostream>
using namespace std;

int main()
{
    int t, i, arr[105], ars[105];
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> arr[i];
        ars[arr[i]] = i;
    }
    for (i = 1; i <= t; i++)
    {
        cout << ars[i] << " ";
    }
    return 0;
}
