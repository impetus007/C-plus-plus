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
        set<char> s;
        string s1, s2;
        cin >> s1 >> s2;
        s.insert(s1[0]);
        s.insert(s1[1]);
        s.insert(s2[0]);
        s.insert(s2[1]);
        if (s.size() == 1)
        {
            cout << "0\n";
        }
        else if (s.size() == 2)
        {
            cout << "1\n";
        }
        else if (s.size() == 3)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }
    return 0;
}