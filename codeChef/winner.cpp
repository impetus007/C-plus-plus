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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p = max(a, b);
        int q = max(c, d);
        if (p < q)
        {
            cout << "P\n";
        }
        else if (p > q)
        {
            cout << "Q\n";
        }
        else
        {
            cout << "TIE\n";
        }
    }
    return 0;
}