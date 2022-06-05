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
        if (b >= a)
        {
            cout << b - a << "\n";
        }
        else
        {
            if (abs(b - a) % 2 == 0)
            {
                cout << (b - a) / 2 << "\n";
            }
            else
            {
                cout << (b - a) / 2 + 2 << "\n";
            }
        }
    }
    return 0;
}