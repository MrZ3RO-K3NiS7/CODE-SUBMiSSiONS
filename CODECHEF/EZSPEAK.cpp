#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, N, i;
    string str;
    cin >> t;
    while (t--)
    {
        int C = 0;
        cin >> N >> str;
        for (i = 0; i < N; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                C = 0;
                continue;
            }
            else
            {
                C++;
                if (C == 4)
                {
                    break;
                }
            }
        }
        if (C < 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
