#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = n;
        int ans = n;
        while (sum >= k)
        {
            ans += n / k;
            n = n / k + n % k;
            sum = n;
        }
        cout << ans << "\n";
    }
    return 0;
}