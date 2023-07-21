#include <bits/stdc++.h>
using namespace std;

#define MRZ                     ios_base
#define ll                      long long
#define db                      double
#define str                     string
#define pb                      push_back
#define pf                      push_front
#define MIN                     INT_MIN
#define MAX                     INT_MAX
#define sz                      size()
#define C(X)                    cout << X << endl
#define all(exe)                exe.begin(), exe.end()
#define f(exe)                  for (int i = 0; i < exe; i++)

void sync()
{
    MRZ::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

void solution()
{
    int N, K;
    cin >> N >> K;
    vector<int> V(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];
    sort(all(V));
    int X = 0, Y = 0;
    for (int i = 1; i < N; i++)
    {
        if (V[i] - V[i - 1] <= K)
        {
            Y++;
            X = max(X, Y);
        }
        else
        {
            Y = 0;
        }
    }
    C(N - X - 1);
}

int main()
{
    sync();
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
