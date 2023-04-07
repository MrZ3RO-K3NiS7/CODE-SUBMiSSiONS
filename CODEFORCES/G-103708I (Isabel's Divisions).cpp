#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int i, N, X, C = 0;
    X = stoi(str);
    for (i = 0; i < str.size(); i++)
    {
        N = str[i] - '0';
        if (N > 0 && X % N == 0)
        {
            C++;
        }
    }
    cout << C << endl;
    return 0;
}
