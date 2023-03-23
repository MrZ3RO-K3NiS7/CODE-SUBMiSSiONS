#include <iostream>
using namespace std;

int main()
{
    int i, x = 0, a, b, c, arr[4], ars[4], max = 0;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (i = 0; i < 4; i++)
    {
        if (arr[i] != max)
        {
            ars[x++] = arr[i];
        }
    }
    a = max - ars[2];
    b = max - ars[1];
    c = max - ars[0];
  
    cout << a << " " << b << " " << c;

    return 0;
}
