#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    bool found = false;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            found = true;
        }
    }

    if (found)
    {
        cout << key << " " << "Found" << endl;
    }
    else
    {
        cout << key << " " << "Not found";
    }
}
