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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            cout << n / 2 + 1 << "\n";
        }
    }
    return 0;
}