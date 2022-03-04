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
        a=a/2;
        if(a<=b){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }

    }
    return 0;
}