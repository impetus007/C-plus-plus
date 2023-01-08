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
        int ans(0);
        int a;
        cin >> a;
        string x, y;
        cin >> y >> x;
        int arr[a];
        if (x[a - 1] == 'g')
        {
            arr[a - 1] = a - 1;
        }
        else
        {
            arr[a - 1] = -1;
        }
        for (int i = a - 2; i >= 0; i--)
        {
            if (x[i] == 'g')
            {
                arr[i] = i;
            }
            else
            {
                arr[i] = arr[i + 1];
            }
        }
        for (int i = 0; i <= a; i++)
        {
            if (x[i] == y[0])
            {
                if (arr[i] == -1)
                {
                    ans = max(ans, a - 1 - i + 1 + arr[0]);
                }
                else
                {
                    ans = max(ans, arr[i] - i);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
