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
        int count = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x >= 1000)
            {
                count++;
            }
                }
        cout << count << "\n";
    }
    return 0;
}