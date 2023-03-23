#include <iostream>
using namespace std;

int main()
{
    int t, X, Y;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        if (X * 5 >= Y)
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
