#include <iostream>
using namespace std;

int main()
{
    int n, x, i, z, count = 0, countz = 0, w;
    cin >> n >> x;
    for (i = 0; i < n; i++)
    {
        cin >> z;
        if (z <= x)
        {
            count++;
        }
        countz = n - count;
    }
    w = (count * 1) + (countz * 2);
    cout << w;
    
    return 0;
}
