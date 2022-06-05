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
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int f = 0, l = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == "START38")
            {
                f++;
            }
            else
            {
                l++;
            }
        }
        cout << f << " " << l << "\n";
    }
    return 0;
}