#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define M (long long)1000000007
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'c' || s[i] == 'l' || s[i] == 'r' || s[i] == 'g')
            {
                count++;
            }
        }
        int ans = 1;
        for (int i = 0; i < count; i++)
        {
            ans = (2 * ans) % M;
        }
        cout << ans << "\n";
    }
    return 0;
}