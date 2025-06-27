#include <bits/stdc++.h>
using namespace std;
void divide(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if ((mid * abs(divisor)) <= abs(dividend))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = -ans;
    }
    else
    {
        ans = ans;
    }
    cout << "Quotient is: " << ans;
}

int main()
{

    divide(-60, 3);
    return 0;
}
