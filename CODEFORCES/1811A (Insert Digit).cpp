#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, Len, i, D;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> Len >> D;
        cin >> str;
        for (i = 0; i < Len; i++)
        {
            if (D > (str[i] - '0'))
            {
                break;
            }
        }
        str.insert(i, to_string(D));
        cout << str << endl;
    }
    return 0;
}
