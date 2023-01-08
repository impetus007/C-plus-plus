// jai shree krishna
#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
int ans(int n, int a, int b, int c)
{

    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
        {
            x = dp[i - a];
        }
        if (i >= b)
        {
            y = dp[i - b];
        }
        if (i >= c)
        {
            z = dp[i - c];
        }
        dp[i] = 1+max(x, max(y, z));
    }
    return dp[n];
}
signed main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << ans(n, a, b, c) << "\n";
    return 0;
}