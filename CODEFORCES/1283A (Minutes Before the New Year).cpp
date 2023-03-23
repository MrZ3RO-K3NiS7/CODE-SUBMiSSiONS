#include <iostream>
using namespace std;

int main()
{
    int t, H, M;
    cin >> t;
    while (t--)
    {
        cin >> H >> M;
        cout << ((24 - H) * 60) - M << endl;
    }
    return 0;
}
