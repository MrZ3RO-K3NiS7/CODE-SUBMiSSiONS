#include <iostream>
using namespace std;

int main()
{
    int N, M, A, B, X, C;
    cin >> N >> M >> A >> B;
    X = M * A;
    if (N % M == 0)
    {
        if (X <= B)
        {
            cout << N * A;
        }
        else
        {
            cout << N / M * B;
        }
    }
    else
    {
        C = N % M * A;
        if (C <= B)
        {
            cout << N / M * B + C;
        }
        else
        {
            cout << N / M * B + B;
        }
    }
    return 0;
}
