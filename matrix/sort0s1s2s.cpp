#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int size)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int ans[8];

    for (int i = 0; i < size; i++)
    {
        switch (arr[i])
        {
        case 0:
        {
            count0++;
            break;
        }
        case 1:
        {
            count1++;
            break;
        }
        case 2:
        {
            count2++;
            break;
        }
        }
    }

    for (int i = 0; i < count0; i++)
    {
        ans[i] = 0;
    }

    for (int i = count0; i < count1 + count0; i++)
    {
        ans[i] = 1;
    }

    for (int i = count1 + count0; i < count2 + count1 + count0; i++)
    {
        ans[i] = 2;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}

int main()
{
    int arr[8] = {0, 1, 2, 2, 1, 0, 0, 1};
    sort012(arr, 8);

    return 0;
}