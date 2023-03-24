#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, arr[11111];
        int X = 0, Y = 0;

        cin >> N;

        while (N)
        {
            if (N % 10 != 0)
            {
                arr[X] = N % 10 * pow(10, Y);
                X++;
            }
            N = N / 10;
            Y++;
        }

        cout << X << endl;

        for (int i = 0; i < X; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
