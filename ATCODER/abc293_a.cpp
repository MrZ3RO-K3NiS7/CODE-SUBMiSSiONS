#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, i, temp;
    string str;
    cin >> str;
    N = str.size();
    for (i = 0; i < N; i = i + 2)
    {
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
    cout << str;
    return 0;
}
