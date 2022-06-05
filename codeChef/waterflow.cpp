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
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        x -= w;
        y *= z;
        if (y == x)
        {
            cout << "filled\n";
        }
        else if (y < x)
        {
            cout << "Unfilled\n";
        }
        else
        {
            cout << "overFlow\n";
        }
    }
    return 0;
}