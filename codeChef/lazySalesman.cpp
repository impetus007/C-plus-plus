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
        int n,w;
        cin>>n>>w;
        int *input=new int[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        sort(input, input+n);
        int count=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(count>= w){
                break;
            }else{
            count += input[i];
            ans++;
            }
        }
       cout<<n-ans<<"\n";
       

    }
    return 0;
}