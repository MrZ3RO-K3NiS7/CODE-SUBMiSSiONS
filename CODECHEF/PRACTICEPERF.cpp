#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[4];
    int count = 0;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 10)
        {
            count++;
        }
    }
    cout << count;
    
    return 0;
}
