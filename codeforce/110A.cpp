#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
   string s;
   cin>>s;
   bool flag=false;
   if(s.size()>=2){
   for(int i=0;i<s.size();i++){
       if(s[i]=='4' || s[i]=='7'){
       flag=true;
       }else{
           flag=false;
           break;
       }  
   }
   }
   if(flag){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
    return 0;
}