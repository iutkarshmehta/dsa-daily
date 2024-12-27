#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    // precompute
    int hash[13] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int element;
        cin >> element;
        /// Displaying hashed values
        cout << hash[element] << endl;
    }
}