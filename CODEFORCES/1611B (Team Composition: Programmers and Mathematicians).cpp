#include <iostream>
using namespace std;

int main()
{
    int t, X, Y, Z;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y;
        Z = (X + Y) / 4;
        if (X < Y)
        {
            if (X <= Z)
            {
                cout << X << endl;
            }
            else
            {
                cout << Z << endl;
            }
        }
        else if (X > Y)
        {
            if (Y <= Z)
            {
                cout << Y << endl;
            }
            else
            {
                cout << Z << endl;
            }
        }
        else
        {
            cout << X / 2 << endl;
        }
    }
    return 0;
}
