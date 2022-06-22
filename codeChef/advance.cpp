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
        int temp = a + 200;
        if (b <= temp && b >= a)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n"
        }
    }
    return 0;
}