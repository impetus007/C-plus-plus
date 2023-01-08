#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp.find(s) != mp.end())
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
        else
        {
            mp[s]++;
            cout << "OK\n";
        }
    }
    return 0;
}