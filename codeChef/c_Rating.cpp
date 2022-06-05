#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int x, y;
    cin >> x >> y;
    int count = 0;
    while (x < y)
    {
        x += 8;
        count++;
    }
    cout << count << "\n";
    return 0;
}