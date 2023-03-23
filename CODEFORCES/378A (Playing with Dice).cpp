#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X, Y, i, A = 0, D = 0, B = 0;
    cin >> X >> Y;
    for (i = 1; i <= 6; i++)
    {
        if (abs(X - i) < abs(Y - i))
        {
            A++;
        }
        else if (abs(X - i) > abs(Y - i))
        {
            B++;
        }
        else
        {
            D++;
        }
    }
    cout << A << " " << D << " " << B;
  
    return 0;
}
