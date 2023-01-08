#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (b > a)
    {
        if (b % 2 != 0)
        {
            b += 1;
        }
        else
        {
            b /= 2;
        }
        ans++;
    }
    ans += a - b;
    cout << ans << "\n";
    return 0;
}