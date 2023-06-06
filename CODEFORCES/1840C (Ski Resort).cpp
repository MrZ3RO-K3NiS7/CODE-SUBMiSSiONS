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
    ll N, K, Q;
    cin >> N >> K >> Q;
    vc<int> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    ll C = 0, D = 0;
    qu<int> tempQ;
    for (int i = 0; i < V.sz; i++)
    {
        if (V[i] <= Q)
        {
            D++;
            tempQ.push(V[i]);
        }
        else
        {
            D = 0;
            while (!tempQ.empty())
            {
                tempQ.pop();
            }
        }
        if (D >= K)
        {
            C = C + D - K + 1;
            tempQ.pop();
        }
    }
    C(C);
}

Nice_To_Meet_U
{
    sync();

    Never_Give_Up

        Trust_iN_Yourself

            See_You_Again___BYEEE
}
