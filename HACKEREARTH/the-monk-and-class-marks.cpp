#include <bits/stdc++.h>
using namespace std;
#define Nice_To_Meet_U int main()
#define ll long long int
#define str string
#define See_U_Again___BYE return 0;

void solve()
{
    map<int, multiset<str>> marks_map;
    ll N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int Marks;
        str Name;
        cin >> Name >> Marks;
        marks_map[Marks].insert(Name);
    }
    auto current_it = --marks_map.end();
    while (true)
    {
        auto &Students = current_it->second;
        int Marks = current_it->first;
        for (auto Student : Students)
        {
            cout << Student << " " << Marks << endl;
        }
        if (current_it == marks_map.begin())
        {
            break;
        }
        current_it--;
    }
}

Nice_To_Meet_U
{
    solve();

    See_U_Again___BYE
}
