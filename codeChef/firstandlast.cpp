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
        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int Max = v[0]+v[a-1];
        for (int i = 1; i < v.size(); i++)
        {
            if ((v[i] + v[i - 1]) >= Max)
            {
                Max = (v[i] + v[i - 1]);
            }
        }
        cout << Max << "\n";
    }
    return 0;
}