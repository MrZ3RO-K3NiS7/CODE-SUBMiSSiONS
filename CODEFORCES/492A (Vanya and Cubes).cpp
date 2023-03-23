#include <iostream>
using namespace std;

int main()
{
    int N, i = 0, j = 1, C = 0;
    cin >> N;
    while (N - (i + j) >= 0)
    {
        N = N - i;
        i = i + j;

        C++;
        i++;
        j++;

        if (N <= 0)
        {
            break;
        }
    }
    cout << C;

    return 0;
}
