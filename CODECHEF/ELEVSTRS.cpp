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
    ll N, S, E;
    cin >> N >> S >> E;
    db X = N * 1.0 * sqrt(2) / S * 1.0;
    db Y = N * 1.0 / E * 2;
    if (X > Y)
    {
        C("Elevator");
    }
    else
    {
        C("Stairs");
    }
}

Nice_To_Meet_U
{
    sync();

    Never_Give_Up

        Trust_iN_Yourself

            See_You_Again___BYEEE
}
