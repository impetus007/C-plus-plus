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
        set<int> v;
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            count++;
            v.insert(x);
        }
        if (v.size() <= 2)
        {
            cout << count / 2 + 1 << "\n";
        }
        else
        {
            cout << count << "\n";
        }
    }
    return 0;
}