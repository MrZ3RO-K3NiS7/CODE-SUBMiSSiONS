#include <iostream>
using namespace std;

int main()
{
    int n, i, x, j, arr[1001];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        cin >> x;
        for (j = 0; j < x; j++)
        {
            cin >> arr[j];
            if (arr[j] >= 1000)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
