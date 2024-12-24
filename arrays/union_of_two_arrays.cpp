#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfArray(vector<int> arr1, vector<int> arr2)
{
    vector<int> unionArray;
    for (int i = 0; i < arr1.size(); i++)
    {
        unionArray.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        unionArray.push_back(arr2[i]);
    }
    return unionArray;
}

int main()
{
    vector<int> arr1 = {2, 3, 4, 5};
    vector<int> arr2 = {7, 8, 9, 0};
    vector<int> array = unionOfArray(arr1, arr2);

    cout << "The combined array is: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i]<< " ";
    }
}