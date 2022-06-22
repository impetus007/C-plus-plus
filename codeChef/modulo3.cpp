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
        int count = 0;
        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << count << "\n";
        }
        else
        {

            while (a % 3 != 0)
            {
                a = abs(a - b);
                count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}