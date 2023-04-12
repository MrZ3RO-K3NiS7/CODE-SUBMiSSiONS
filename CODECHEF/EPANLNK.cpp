#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, Sum;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Sum = 0;
        for (int i = 0; i < str.size(); i++)
        {
            Sum = (Sum * 10 + (str[i] - '0')) % 20;
        }
        cout << Sum << endl;
    }
    return 0;
}
