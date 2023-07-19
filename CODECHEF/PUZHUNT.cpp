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
    int N;
    cin >> N;
    if (6 <= N && N <= 8)
        C("YES");
    else
        C("NO");
}

int main()
{
    sync();

    solution();

    return 0;
}
