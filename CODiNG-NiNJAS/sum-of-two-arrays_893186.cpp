#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> RES;
    int Carry = 0;
    while (i >= 0 && j >= 0)
    {
        int Sum = a[i] + b[j] + Carry;
        Carry = Sum / 10;
        Sum = Sum % 10;
        RES.push_back(Sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int Sum = a[i] + Carry;
        Carry = Sum / 10;
        Sum = Sum % 10;
        RES.push_back(Sum);
        i--;
    }
    while (j >= 0)
    {
        int Sum = b[j] + Carry;
        Carry = Sum / 10;
        Sum = Sum % 10;
        RES.push_back(Sum);
        j--;
    }
    while (Carry != 0)
    {
        int Sum = Carry;
        Carry = Sum / 10;
        Sum = Sum % 10;
        RES.push_back(Sum);
        j--;
    }
    reverse(RES.begin(), RES.end());
    return RES;
}
