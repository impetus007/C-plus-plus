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
        int n,k;
        cin>>n>>k;
        if(k>n){
            cout<<"-1"<<"\n";
            return 0;
        }else{
            int count=0,sum=0;
            for(int i=0;i<n;i++){
                if(count<k){
                    sum=count+97;
                    cout<<char(sum);
                    count++;
                }else{
                    count=0;
                    sum=count+97;
                    cout<<char(sum);
                }
            }
            
        }
    }
    return 0;
}