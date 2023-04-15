#include <iostream>
using namespace std;

int main()
{
    int t, X, Y, Z;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        Z = X & Y;
        cout << (X ^ Z) + (Y ^ Z) << endl;
    }
    return 0;
}
