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
        if (a == 1)
        {
            cout << "1"
                 << "\n";
        }
        else if (a == 2)
        {
            int d, e;
            cin >> d >> e;
            if (d == e)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        else
        {
            int count = 0;
            vector<int> v;
            for (int i = 0; i < a; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i - 1] == v[i])
                {

                    count++;
                }
            }
            cout << (v.size() - count) << "\n";
        }
    }
    return 0;
}