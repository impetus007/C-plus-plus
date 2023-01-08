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
        int n, m;
        cin >> n >> m;
        n = n - 1;
        m = m - 1;
        if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "Tonya\n";
        }
        else if (n % 2 != 0 && m % 2 != 0)
        {
            cout << "Tonya\n";
        }
        else
        {
            cout << "Burenka\n";
        }
    }
    return 0;
}