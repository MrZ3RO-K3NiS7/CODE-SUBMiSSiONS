#include <iostream>
using namespace std;

int main()
{
    int t, i, C = 0, D = 0, MN, MX;
    cin >> t;
    int arr[1111];
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    MX = arr[0];
    MN = arr[0];
    for (int i = 0; i < t; i++)
    {
        if (arr[i] > MX)
        {
            MX = arr[i];
            C++;
        }
        if (arr[i] < MN)
        {
            MN = arr[i];
            D++;
        }
    }
    cout << C + D;
    
    return 0;
}
