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
        string s;
        int pos=0;
        cin>>s;
       for(int i=0;i<s.size();i++){
           if(s[i+3]==0){
               pos=i+3;
               i+=3;
           }else if(s[i+1]==0){
               pos=i+1;
               i+=1;
           }

       } 
       cout<<pos<<endl;
    }
    return 0;
}