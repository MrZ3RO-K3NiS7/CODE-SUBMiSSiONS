#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    ll N, K, X;
    cin >> N >> K;
    if(N%2==0)
    {
        X=N/2;
        if(K>X)
        {
            cout << (K-X)*2;
        }
        else
        {
            cout << (K*2)-1;
        }
    }
    else
    {
        X=ceil(N*1.0/2);
        if (K>X)
        {
            cout << (K-X)*2;
        }
        else
        {
            cout << (K*2)-1;
        }
    }
    return 0;
}
