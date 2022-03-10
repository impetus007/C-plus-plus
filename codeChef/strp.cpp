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
        string s;
        cin >> s;
        int count = 0;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == s[i + 1])
            {
                i += 2;
            }
            else
            {
                i++;
            }
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}