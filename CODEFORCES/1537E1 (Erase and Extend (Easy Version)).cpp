#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U          int main()
#define MRZ                     ios_base
#define ll                      long long
#define db                      double
#define ld                      long double
#define ull                     unsigned long long
#define str                     string
#define vc                      vector
#define pr                      pair
#define mp                      map
#define st                      set
#define qu                      queue
#define stk                     stack
#define pb                      push_back
#define pf                      push_front
#define all(X)                  X.begin(), X.end()
#define SOLN___XD               solution();
#define Never_Give_Up           ll t;cin >> t;
#define Trust_iN_Yourself       while (t--){solution();}
#define See_You_Again___BYEEE   return 0;

void sync()
{
    MRZ::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

void solution()
{
    int N, K, Mark = 1;
    str S;
    cin >> N >> K >> S;
    for (int i = 1; i < N; i++)
    {
        if (S[i] > S[i % Mark])
        {
            break;
        }
        if (S[i] < S[i % Mark])
        {
            Mark = i + 1;
        }
    }
    for (int i = 0; i < K; i++)
    {
        cout << S[i % Mark];
    }
}

Nice_To_Meet_U
{
    sync();

    SOLN___XD

    See_You_Again___BYEEE
}
