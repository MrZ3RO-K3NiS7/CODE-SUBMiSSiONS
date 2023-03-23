#include <iostream>
using namespace std;

int main()
{
    int t, i, x;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x;
        if (x <= 24)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
