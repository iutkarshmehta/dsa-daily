#include <bits/stdc++.h>
using namespace std;

void pair_sum(vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                cout << "The pairs are: " << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 60;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    pair_sum(arr, sum);
} 