#include <iostream>
using namespace std;

int main()
{
    int t, N, X, Y, Mark;
    float Z;
    cin >> t;
    while (t--)
    {
        cin >> N;
        X = 0;
        Y = 0;
        Mark = 0;
        for (int i = 0; i < N; i++)
        {
            int Q;
            cin >> Q;
            X = X + Q;
            Y++;
            Z = (X * 100.00) / Y;
            if (Z == 100)
            {
                Mark++;
            }
        }
        cout << Mark << endl;
    }
    return 0;
}
