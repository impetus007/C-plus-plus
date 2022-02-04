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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n/2;i++){
            if(s[i] != s[n-i]){
                s[i]=s[n-i-1];
                k=k-1;  
            }
        }
        cout<<k+1<<endl;
        bool flag=true;
        for(int j=0;j<n/2;j++){
            if(s[j]!=s[n-j]){
                flag=false;
            }
        }
        if(flag){
            if(k==0){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}