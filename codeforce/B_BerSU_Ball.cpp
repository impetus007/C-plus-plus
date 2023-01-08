#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int a;
    cin >> a;
    vector<int> boys;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        boys.push_back(x);
    }
    int b;
    cin>>b;
    vector<int> girls;
    for (int j = 0; j < b; j++)
    {
        int y;
        cin >> y;
        girls.push_back(y);
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
       
            if (abs(boys[i] - girls[j]) <= 1)
            {
                //cout<<"ans1";
                ans++;
                girls[j] = 1000;
                break;
            }
      
    }
    cout << ans << "\n";
    // return 0;
}