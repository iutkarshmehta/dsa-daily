#include <bits/stdc++.h>
using namespace std;

int length(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void replaceSpaces(char name[])
{
    int len = length(name);
    for (int i = 0; i < len; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
    cout << name;
}

int main()
{
    char name[100];
    cin.getline(name, 50);
    replaceSpaces(name);
    return 0;
}
