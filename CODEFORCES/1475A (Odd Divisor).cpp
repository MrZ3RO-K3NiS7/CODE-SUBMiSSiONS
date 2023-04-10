#include <iostream>
using namespace std;

int main()
{
    long long int t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        while (N % 2 == 0)
        {
            N = N / 2;
        }
        if (N != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
