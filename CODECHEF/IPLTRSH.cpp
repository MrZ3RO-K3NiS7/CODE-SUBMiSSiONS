#include <iostream>
using namespace std;

int main()
{
    int t, X, Y;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        if (X <= Y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << X-Y << endl;
        }
    }
    return 0;
}
