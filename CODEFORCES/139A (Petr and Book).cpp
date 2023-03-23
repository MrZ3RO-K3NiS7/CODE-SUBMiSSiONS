#include <iostream>
using namespace std;

int main()
{
    int P, i, X[1005], S = 0, C = 0;
    cin >> P;
    for (i = 1; i <= 7; i++)
    {
        cin >> X[i];
    }
    while (S < P)
    {
        for (i = 1; i <= 7; i++)
        {
            S = S + X[i];
            C++;
            if (S >= P)
            {
                break;
            }
        }
    }
    cout << i;

    return 0;
}
