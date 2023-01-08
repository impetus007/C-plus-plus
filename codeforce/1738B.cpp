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
        vector<int> v;
        int arr[k];
        int k1 = n - k + 1;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (v[0] <= 0)
        {
            arr[0] = v[0] / k1;
        }
        else
        {
            arr[0] = v[0] / k1;
            if ((v[0] % k1) > 0)
            {
                arr[0]++;
            }
        }
        // cout << arr[0] << "\n";
        for (int i = 1; i < k; i++)
        {
            arr[i] = v[i] - v[i - 1];
        }
        bool flag = 0;
        for (int i = 1; i < k; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}