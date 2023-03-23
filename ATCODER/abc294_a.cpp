#include <iostream>
using namespace std;

int main()
{
    int t, i, arr[111];
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
