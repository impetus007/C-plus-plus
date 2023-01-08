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
        string s;
        cin >> s;
        string s1 = "Yes";
        int a = 51;
        while (a--)
        {
            s1 += "Yes";
        }
        int x = s1.find(s);
        cout << x << "\n";
        if (x >= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}