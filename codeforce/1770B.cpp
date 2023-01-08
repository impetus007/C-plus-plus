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
        int n, m;
        cin >> n >> m;
        int i = n;
        int j = 1;
        while (i >= j)
        {
            cout << i-- << " ";

            if (i >= j)
            {
                cout << j++ << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
