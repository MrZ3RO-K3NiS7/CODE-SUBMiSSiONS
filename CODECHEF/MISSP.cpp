#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int X = 0;
        for (int i = 0; i < N; i++)
        {
            int T;
            cin >> T;
            X = X ^ T;
        }
        cout << X << endl;
    }
    return 0;
}
