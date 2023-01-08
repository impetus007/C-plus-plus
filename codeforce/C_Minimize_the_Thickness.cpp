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
        vector<int> v;
        map<int, int> m1;
        map<int, int> m2;
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v.push_back(x);
            m1[sum] = i;
        }
        sum = 0;
        for (int i = a - 1; i >= 0; i--)
        {
            sum += v[i];
            m2[sum] = i;
        }
        
    }
    return 0;
}