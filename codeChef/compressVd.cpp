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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (v.size() == 1)
        {
            cout << "1\n";
        }
        if (v.size() == 2)
        {
            if (v[0] == v[1])
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        if (v.size() > 2)
        {
            int count = 0;
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i - 1] == v[i])
                {
                    count++;
                }
            }
            cout << v.size() - count << "\n";
        }
    }
    return 0;
}