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
        int n, m;
        cin>>n>>m;
        if(n%2!=0){
            if(((n/2)+1)) < m){
                cout<<"-1\n";
            }
        }else{
            if((n/2)<m){
                cout<<"-1\n";
            }else{
                for(int i=0;i<n/2;i++){
                    cout<<char[96+i]
                }
            }
        }

    }
    return 0;
}