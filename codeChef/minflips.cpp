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
        int ones = 0, mones = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                ones++;
            }
            else
            {
                mones++;
            }
        }
        int total = abs(ones - mones);
        if (total % 2 == 0)
        {
            cout << total / 2 << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}