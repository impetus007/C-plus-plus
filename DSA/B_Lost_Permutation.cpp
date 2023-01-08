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
        int a, b;
        cin >> a >> b;
        vector<int> v;
        set<int> s;

        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            v.push_back(x);
        }
        if (s.size() != v.size())
        {
            cout << "NO\n";
            return 0;
        }
        vector<int>::iterator it;
        // sort(v.begin(), v.end());
        int count = 0;
        int gE = *max_element(v.begin(), v.end());
        for (int i = 1; i <= gE; i++)
        {

            it = find(v.begin(), v.end(), i);
            if (it != v.end())
            {
                continue;
            }
            else
            {
                // count++;
                b = b - i;
            }
        }
        // cout << "b" << b << "\n";
        // cout << "gE" << gE << "\n";
        if (b == 0)
        {
            cout << "YES\n";
        }
        else if (b < 0)
        {
            cout << "NO\n";
        }
        else
        {
            while (b > 0)
            {
                gE++;
                b = b - gE;
                // cout << "b" << b << "\n";
            }
            if (b == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}