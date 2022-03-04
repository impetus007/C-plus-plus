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
        int *input = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (input[i] == 6 || input[i] == 7 || input[i] == 13 || input[i] == 14 || input[i] == 20 || input[i] == 21 || input[i] == 27 || input[i] == 28)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        cout << 8 + count << "\n";
    }
    return 0;
}