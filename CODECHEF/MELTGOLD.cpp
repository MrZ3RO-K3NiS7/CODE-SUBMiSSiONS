#include <iostream>
using namespace std;

int main()
{
    int t, X, Y;
    cin >> t;
    while (t--)
    {
        int C = 0, i = 1;
        cin >> X >> Y;
        while (X > Y)
        {
            Y = Y + i;
            i++;
            C++;
        }
        cout << C << endl;
    }
    return 0;
}
