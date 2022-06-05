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
        int a, b;
        cin >> a >> b;
        int f = 0;
        f = (1000 - (b * 4)) + (500 - (2 * (a + b)));
        int l = (500 - (a * 2)) + (1000 - (4 * (a + b)));
        cout << max(f, l) << "\n";
    }
    return 0;
}