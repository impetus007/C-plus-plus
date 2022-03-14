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
        int a;
        cin >> a;
        int count = 6;
        int ans = 0;
        if (a <= 6)
        {
            cout << a / 6 << "\n";
        }
        else
        {
            while (count < a)
            {
                ans++;
                count += 7;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}