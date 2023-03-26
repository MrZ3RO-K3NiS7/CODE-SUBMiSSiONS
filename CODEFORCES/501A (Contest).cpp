#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, M, V;
    cin >> A >> B >> C >> D;
    M = max(A - A / 250 * C, 3 * A / 10);
    V = max(B - B / 250 * D, 3 * B / 10);
    if (M > V)
    {
        cout << "Misha";
    }
    else if (V > M)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }
    return 0;
}
