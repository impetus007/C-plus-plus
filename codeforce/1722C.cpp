#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k, n;
        cin >> k >> n;
        int j = 1, diff = 1;
        for (int i = 1; i <= k; i++)
        {
            cout << j << " ";
            if (n - (j + diff) >= (k - (i + 1)))
            {
                j = j + diff;
                diff++;
            }
            else
            {
                j++;
            }
        }
    }
    return 0;
}