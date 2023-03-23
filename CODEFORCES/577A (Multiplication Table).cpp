#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll N, X, i, C = 0;
    cin >> N >> X;
    for (i = 1; i <= N; i++)
    {
        if (X % i == 0 && N * i >= X)
        {
            C++;
        }
    }
    cout << C;

    return 0;
}
