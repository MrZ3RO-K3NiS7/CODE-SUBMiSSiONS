#include <bits/stdc++.h>
void reverseArray(vector<int> &arr, int m)
{
    int S = m + 1;
    int E = arr.size() - 1;
    while (S <= E)
    {
        swap(arr[S], arr[E]);
        S++;
        E--;
    }
}
