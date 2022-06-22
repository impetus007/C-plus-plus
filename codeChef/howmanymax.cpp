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
        if (s.size() == 1)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            vector<char> v;
            int i = 0;
            for (; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    continue;
                }
                else
                {
                    v.push_back(s[i]);
                }
            }
            v.push_back(s[i]);
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == '1')
                {
                    count++;
                }
                // if (v[v.size() - 1] != '1')
                // {
                //     count++;
                // }
                // cout << v[i] << " ";
            }
            int last = v.size() - 1;
            // cout << "last" << last << "\n";
            // cout << v[last] << "\n";
            if (v[last] == '0')
            {
                cout << count + 1
                     << "\n";
            }
            else
            {
                cout << count << "\n";
            }
        }
    }
    return 0;
}