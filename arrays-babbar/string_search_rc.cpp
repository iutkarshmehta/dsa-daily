#include <bits/stdc++.h>
using namespace std;

int findChar(string &str, int i, int size, char key)
{
    if (i >= size)
    {
        return -1;
    }

    if (str[i] == key)
    {
        return i;
    }

    return findChar(str, i + 1, size, key);
}

int main()
{
    string str = "Utkarshmehta";
    int size = str.size();
    int i = 0;
    char key = 'a';
    int index = findChar(str, i, size, key);
    cout << "Found at index: "<<index;
    return 0;
}
