#include <iostream>
using namespace std;

int main()
{
    int X, Y, A, B;
    cin >> X >> Y;
    A = X / Y;
    B = X / (Y * Y);
    cout << A - B << endl;
    return 0;
}
