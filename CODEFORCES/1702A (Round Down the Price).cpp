#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, i, X, L, R;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> X;
        L = log10(X);
        R = X - pow(10, L);
        cout << R << endl;
    }
    return 0;
}
