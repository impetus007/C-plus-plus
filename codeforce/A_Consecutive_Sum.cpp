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
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i % k] = max(v[i % k], x);
        }
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += v[i];
        }
        cout << ans << "\n";
    }
    return 0;
}