#include <bits/stdc++.h>
using namespace std;

int cutIntoSegments(int len, int x, int y, int z)
{
    if (len == 0)
        return 0;
    if (len < 0)
        return INT_MAX;

    int ans1 = cutIntoSegments(len - x, x, y, z) + 1;
    int ans2 = cutIntoSegments(len - y, x, y, z) + 1;
    int ans3 = cutIntoSegments(len - z, x, y, z) + 1;

    return max(ans1, max(ans2, ans3));
}

int main()
{
    int x = 5;
    int y = 2;
    int z = 2;
    int len = 0;
    cout << cutIntoSegments(len, x, y, z) << endl;
    return 0;
}
