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
#define stk                     stack
#define qu                      queue
#define dq                      deque
#define pb                      push_back
#define pf                      push_front
#define MIN                     INT_MIN
#define MAX                     INT_MAX
#define sz                      size()
#define C(X)                    cout << X << endl
#define all(exe)                exe.begin(), exe.end()
#define f(exe)                  for (int i = 0; i < exe; i++)
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
    int N, X, Q, M;
    cin >> N;
    vc<int> V;
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        V.pb(X);
    }
    sort(all(V));
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> M;
        int L = 0, R = N - 1;
        while (L <= R)
        {
            int MiD = (L + R) / 2;
            if (M >= V[MiD])
            {
                L = MiD + 1;
            }
            else
            {
                R = MiD - 1;
            }
        }
        cout << L << endl;
    }
}

Nice_To_Meet_U
{
    sync();

    SOLN___XD

    See_You_Again___BYEEE
}
