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
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        if(n==1 || n==2){
            cout<<n/2<<endl;
        }else if(n%2==0){
            int ans=0;
            for(int i=0;i<n;i+=2){
                if((arr[i]+arr[i+1])==max){
                    continue;
                }else{
                    ans++;
                }
            }
            cout<<ans<<endl;
        
        }else{
            int count=0;
            for(int i=0;i<n;i+=2){
                if(arr[i]==max || arr[i+1]==max){
                    continue;
                }
                else{
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}