#include <iostream>
using namespace std;

int main()
{
    int R, B, U = 0, S = 0;
    cin >> R >> B;
    while (R != 0 && B != 0)
    {
        U++;
        R--;
        B--;
    }
    while (R - 2 >= 0)
    {
        S++;
        R = R - 2;
    }
    while (B - 2 >= 0)
    {
        B = B - 2;
        S++;
    }
    cout << U << " " << S;

    return 0;
}
