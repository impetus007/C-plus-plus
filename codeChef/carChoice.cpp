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
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        float ans1 = c / a;
        float ans2 = d / b;

        if (ans1 < ans2)
        {
            cout << "-1"
                 << "\n";
        }
        else if (ans1 == ans2)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            cout << "1"
                 << "\n";
        }
        // cout << ans1 << " " << ans2 << "\n";
    }
    return 0;
}