#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll t, N, K;
    cin >> t;
    while (t--)
    {
        cin >> N >> K;
        if (N % K == 0 || N % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if ((N - K) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
