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
        int n, k;
        cin >> n >> k;
        int ans = k / (n - 1);
        if (k % (n - 1) == 0)
            cout << (n * ans) - 1 << endl;
        else
            cout << (n * ans) + k % (n - 1) << endl;
    }
    return 0;
}