#include <iostream>
using namespace std;

int main()
{
    int t, X;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        X = str.size();
        if (str.size() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (str[0] == ')' || str[X - 1] == '(')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
