#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N, i, C = 0, S = 0;
    char str[100], srr[100], sss[100];
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> sss;
        if (i == 0)
        {
            strcpy(str, sss);
            C++;
        }
        else
        {
            if (strcmp(str, sss) == 0)
            {
                C++;
            }
            else
            {
                strcpy(srr, sss);
                S++;
            }
        }
    }
    if (C > S)
    {
        cout << str;
    }
    else
    {
        cout << srr;
    }
    return 0;
}
