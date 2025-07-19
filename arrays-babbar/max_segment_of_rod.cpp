#include <bits/stdc++.h>
using namespace std;

int solve(int num, int x, int y, int z)
{
    if (num == 0)
    {
        return 0;
    }

    if (num < 0)
    {
        return INT_MIN;
    }

    int ans1 = solve(num - x, x, y, z) + 1;
    int ans2 = solve(num - y, x, y, z) + 1;
    int ans3 = solve(num - z, x, y, z) + 1;

    int maxi = max(ans1, max(ans2, ans3));

    return maxi;
}

int main()
{
    int num = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = solve(num, x, y, z);
    if (ans < 0)
    {
        ans = 0;
    }
    cout << "Ans is: " << ans;
    return 0;
}
