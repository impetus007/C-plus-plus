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
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        if (s[s.size() - 1] == 0)
        {
            cout << count + 1 << "\n";
        }
        else
        {
            cout << count << "\n"
        }
    }
    return 0;
}