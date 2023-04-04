#include <iostream>
using namespace std;

int main()
{
    string str, srr = "hello";
    cin >> str;
    int i, N = str.size(), C = 0;
    for (i = 0; i < N; i++)
    {
        if (str[i] == srr[C])
        {
            C++;
        }
    }
    if (C == srr.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
