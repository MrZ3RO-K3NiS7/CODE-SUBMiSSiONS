#include <iostream>
using namespace std;

int main()
{
    int X, Y, i, j, K;
    char CH;
    cin >> X >> Y;
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            cin >> K;
            if (K == 0)
            {
                cout << ".";
            }
            else
            {
                CH = 'A' + K - 1;
                cout << CH;
            }
        }
        cout << endl;
    }
    return 0;
}
