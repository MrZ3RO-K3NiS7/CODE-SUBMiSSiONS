#include <iostream>
using namespace std;

int main()
{
    int t, X, Y;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        if (X * 15 >= Y * 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
