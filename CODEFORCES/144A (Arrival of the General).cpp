#include <iostream>
using namespace std;

int main()
{
    int N, i, arr[105], C0 = 0, CN = 0, Max = 0, Min = 999, MxI = 0, MnI = 0, Temp;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
            MxI = i;
        }
    }
    while (MxI != 0)
    {
        Temp = arr[MxI];
        arr[MxI] = arr[MxI - 1];
        arr[MxI - 1] = Temp;
        MxI--;
        C0++;
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] <= Min)
        {
            Min = arr[i];
            MnI = i;
        }
    }
    while (MnI != N - 1)
    {
        Temp = arr[MnI];
        arr[MnI] = arr[MnI + 1];
        arr[MnI + 1] = Temp;
        MnI++;
        CN++;
    }
    cout << C0 + CN;

    return 0;
}
