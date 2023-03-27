#include <iostream>
using namespace std;

int main()
{
    int t, N, i;
    cin >> t;
    while (t--)
    {
        cin >> N;
        for (i = 1; i <= N; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                N++;
            }
        }
        cout << N << endl;
    }
    return 0;
}
