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
        bool ans1 = false;
        int a1, a2;
        if (n >= 0)
        {

            long long sr = sqrt(n);
            if (sr * sr == n)
            {
                ans1 = true;
                a1 = sr;
            }
        }
        bool ans2 = false;
        int i = 1;
        for (;; i++)
        {
            if (n % i == 0)
            {
                n /= i;
            }
            else
            {
                break;
            }
        }

        if (n == 1)
        {
            ans2 = true;
            a2 = i;
        }
        else
        {
            ans2 = false;
        }
        if (ans1)
        {
            cout << a1 << "\n";
        }
        else if (ans2)
        {
            cout << a2 << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
    }
    return 0;
}
