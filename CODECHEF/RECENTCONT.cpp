#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int S = 0, L = 0;
        for (j = 0; j < x; j++)
        {
            string str;
            cin >> str;
            if (str[0] == 'S')
            {
                S++;
            }
            else if (str[0] == 'L')
            {
                L++;
            }
        }
        cout << S << " " << L << endl;
    }
    return 0;
}
