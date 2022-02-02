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
        if(a==b){
            cout<<b*2-1<<"\n";
        }else if(b==0){
            cout<<a<<endl;
        }else{
            cout<<(b*2)+(a-b)<<"\n";
        }

    }
    return 0;
}
