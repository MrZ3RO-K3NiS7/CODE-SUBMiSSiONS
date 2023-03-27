#include <iostream>
using namespace std;

int main()
{
    int t, N;
    cin >> t;
    while (t--)
    {
        cin >> N;
        if (N % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << " " << N / 2 << endl;
        }
    }
    return 0;
}
