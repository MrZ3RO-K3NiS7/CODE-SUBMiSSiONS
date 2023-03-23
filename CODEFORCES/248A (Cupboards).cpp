#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, sumx = 0, sumy = 0, sumxz = 0, sumyz = 0, count = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x >> y;
        sumx = sumx + x;
        sumy = sumy + y;
        sumxz = t - sumx;
        sumyz = t - sumy;
    }
    if (sumx < sumxz)
    {
        if (sumy < sumyz)
        {
            count = sumx + sumy;
        }
        else if (sumyz < sumy)
        {
            count = sumx + sumyz;
        }
        else
        {
            count = sumx + sumy;
        }
    }
    else if (sumxz < sumx)
    {
        if (sumy < sumyz)
        {
            count = sumxz + sumy;
        }
        else if (sumyz < sumy)
        {
            count = sumxz + sumyz;
        }
        else
        {
            count = sumx + sumy;
        }
    }
    else
    {
        if (sumy < sumyz)
        {
            count = sumx + sumy;
        }
        else if (sumyz < sumy)
        {
            count = sumx + sumyz;
        }
        else
        {
            count = sumx + sumy;
        }
    }
    cout << count << endl;

    return 0;
}
