#include <bits/stdc++.h>
using namespace std;

void lastOccurenceLTR(string &s, int i, char ch, int &ans)
{
    // base case
    if (i >= s.size())
    {
        return;
    }

    if (s[i] == ch)
    {
        ans = i;
    }

    lastOccurenceLTR(s, i + 1, ch, ans);
}

int main()
{
    string str = "abcddgdf";
    char ch = 'd';
    int ans = -1;
    lastOccurenceLTR(str, 0, ch, ans);
    cout<<ans;
    return 0;
}
