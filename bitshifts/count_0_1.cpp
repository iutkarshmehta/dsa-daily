#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 0, 0, 0, 0, 1, 1, 1, 0, 0};
    int zerosCount = 0;
    int onesCount = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            zerosCount++;
        }
        if (arr[i] == 1)
        {
            onesCount++;
        }
    }
    cout << "Zeroes count is: " << zerosCount << endl;
    cout << "ones count is: " << onesCount << endl;
}