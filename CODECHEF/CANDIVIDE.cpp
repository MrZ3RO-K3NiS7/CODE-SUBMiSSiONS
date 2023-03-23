#include <iostream>
using namespace std;

int main()
{
    int t, X;
    cin >> t;
    while (t--)
    {
        cin >> X;
        if (X > 2 && X % 3 == 0)
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
