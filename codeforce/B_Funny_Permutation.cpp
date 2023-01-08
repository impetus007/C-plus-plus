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
        if (n % 2 == 0)
        {
            int a = n;
            while (a--)
                cout << n-- << " ";
        }
        else if (n == 3 || n == 1)
        {
            cout << "-1"
                 << " ";
        }
        else
        {
            int a =  n / 2;
            int b = a;
            int c = n-n/2 ;

            while (b--)
            {
                cout << n-- << " ";
            }
            int x = 1;
            while (c--)
            {
                cout << x++ << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}