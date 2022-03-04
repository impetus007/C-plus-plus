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
        int a, b;
        cin>>a>>b;
        int ans = 21-(a+b);

        if(ans>10 || ans<1){
            cout<<"-1"<<endl;
        }else{
            cout<<ans<<"\n";
                    }
    }
    return 0;
}