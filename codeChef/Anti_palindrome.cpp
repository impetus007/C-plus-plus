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
        
        string s;
        cin>>s;
        if(n%2!=0){
            cout<<"NO"<<endl;
        }else{
            sort(s.begin(),s.end());
            char alpa;
            int count=0;
            int half;
        half=n/2;
            for(int i=0;i<n;i++){
                if(s[i]==s[n-i]){
                    alpa=s[i];
                   for(int j=0;j<n;j++){
                       if(s[j]==alpa){
                           count++;
                       }
                   }if(count>)
                }
            }
           
        }
    }
    return 0;
}