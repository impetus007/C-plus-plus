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
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            c.push_back(x);
        }
        // int sum=c[0];
        for (int i = 1; i < m; i++)
        {
            c[i] += c[i - 1];
            //    sum+=c[i];
        }

        // map
        map<int, int> mp;
        for (int i = 0; i < c.size(); i++)
        {
            mp[b[i]] = c[i];
        }
        

        for(int i=0;i<n;i++){
            
        }

    }
    return 0;
}