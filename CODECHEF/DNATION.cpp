#include <iostream>
using namespace std;

int main()
{
    int t, X, Y;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        cout << abs(X - Y) << endl;
    }
    return 0;
}
