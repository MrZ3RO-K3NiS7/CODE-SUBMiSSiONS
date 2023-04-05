#include <iostream>
using namespace std;

int main()
{
    int t, X, Y, Z;
    cin >> t;
    while (t--)
    {
        int C = 0;
        cin >> X >> Y;
        while (X--)
        {
            cin >> Z;
            if (Z >= Y)
            {
                C++;
            }
        }
        cout << C << endl;
    }
    return 0;
}
