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
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0)
        {
            cout << x << " " << x + 1 << " " << x + 2 << " " << x + 3 << "\n";
        }
        else
        {
            if (x + 3 >= y)
            {
                cout << "-1"
                     << "\n";
            }
            else
                (x + 3 <= y)
                {
                    cout << x + 1 << " " << x + 2 << " " << x + 3 << " " << x + 4 << "\n";
                }
        }
    }
    return 0;
}