#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, R, G, B;
    cin >> n >> k;
    R = ceil((n * 2) * 1.0 / k);
    G = ceil((n * 5) * 1.0 / k);
    B = ceil((n * 8) * 1.0 / k);
    cout << R + G + B;
  
    return 0;
}
