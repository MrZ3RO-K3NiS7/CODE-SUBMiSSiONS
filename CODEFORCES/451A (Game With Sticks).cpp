#include <iostream>
using namespace std;

int main()
{
    int N, M, X;
    cin >> N >> M;
    X = min(N, M);
    if (X % 2 != 0)
    {
        cout << "Akshat";
    }
    else
    {
        cout << "Malvika";
    }
    return 0;
}
