#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U          int main()
#define MRZ                     ios_base
#define ll                      long long
#define str                     string
#define vc                      vector
#define stk                     stack
#define SOLN___XD               solution();
#define See_You_Again___BYEEE   return 0;

void sync()
{
    MRZ::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

void solution()
{
    int N;
    cin >> N;
    vc<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    vc<int> NGE(v.size());
    stk<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            NGE[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        NGE[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " " << (NGE[i] == -1 ? -1 : v[NGE[i]]);
        cout << endl;
    }
}

Nice_To_Meet_U
{
    sync();

    SOLN___XD

    See_You_Again___BYEEE
}
