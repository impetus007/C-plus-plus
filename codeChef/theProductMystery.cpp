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
        int b, c;
        cin>>b>>c;
        int a=1;
        while((a*b)%c!=0){
            a++;
        }
        cout<<a<<"\n";

    }
    return 0;
}