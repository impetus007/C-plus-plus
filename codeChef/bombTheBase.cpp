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
        int n, b;
        cin >> n >> b;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < b)
            {
                index = i + 1;
            }
        }
        cout << index << "\n";
    }
    return 0;
}