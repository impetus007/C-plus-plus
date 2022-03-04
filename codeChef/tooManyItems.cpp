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
        if(n%10==0){
            cout<<n/10<<"\n";
        }else{
            cout<<n/10+1<<"\n";
        }

    }
    return 0;
}