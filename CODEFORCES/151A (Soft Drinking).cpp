#include <iostream>
using namespace std;

int main()
{
    int N, K, L, C, D, P, NL, NP;

    cin >> N >> K >> L >> C >> D >> P >> NL >> NP;

    cout << min(min(K * L / NL, C * D), P / NP) / N << endl;

    return 0;
}
