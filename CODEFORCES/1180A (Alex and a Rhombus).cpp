#include <iostream>
using namespace std;

int main()
{
    int N, i = 0, j = 1, Sum = 0, Mark = 0, X;
    cin >> N;

    while (Mark != N)
    {
        Sum = Sum + i + j;
        i++;
        j++;
        Mark++;
    }

    X = i + j - 2;

    while (X != 1)
    {
        X = X - 2;
        Sum = Sum + X;
    }

    cout << Sum << endl;

    return 0;
}
