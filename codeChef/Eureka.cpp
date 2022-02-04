#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double f1;
        f1=(0.143 * n);
        double ans;
        ans =round(pow(f1,n));
        cout<<ans<<endl;

    }
    return 0;
}