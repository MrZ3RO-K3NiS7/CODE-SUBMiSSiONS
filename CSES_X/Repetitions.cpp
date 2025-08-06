#include <bits/stdc++.h>
using namespace std;
#define len str.size()

int main()
{
    int i, X = 0, C = 1;
    string str;
    cin >> str;
    for (i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        {
            C++;
        }
        else
        {
            X = max(C, X);
            C = 1;
        }
    }
    cout << X;
    return 0;
}