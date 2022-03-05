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
        if ((a + b) % 2 == 0)
        {
            cout << "Janmansh"
                 << "\n";
        }
        else
        {
            cout << "Jay"
                 << "\n";
        }
    }
    return 0;
}