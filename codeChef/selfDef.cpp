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
        int count = 0;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 10 && arr[i] <= 60)
                count++;
        }
        cout << count << "\n";
    }
    // cout << count << "\n";
    return 0;
}