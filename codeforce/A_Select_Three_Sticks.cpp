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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = INT_MAX;
        for (int i = 2; i < n; i++)
        {
            ans = min(ans, arr[i] - arr[i - 2]);
        }
        cout << ans << "\n";
    }
    return 0;
}