#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, i;
    cin >> N;
    if (N == 2 || N == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (i = 2; i <= N; i = i + 2)
        {
            cout << i << " ";
        }
        for (i = 1; i <= N; i = i + 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}