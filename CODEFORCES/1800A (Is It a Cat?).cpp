#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N;
    cin >> t;
    string str;
    while (t--)
    {
        cin >> N;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str.erase(unique(str.begin(), str.end()), str.end());
        cout << (str == "meow" ? "YES" : "NO") << endl;
    }
    return 0;
}
