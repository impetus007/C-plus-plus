#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    int v1,v2,v3;
    v1=p-a;
    
    v2=q-b;
  
    v3=r-c;
   
    if(v1>=v2 && v1>=v3){
        a=p;
       
    }else if(v2>=v1 && v2>=v3){
        b=q;
        
    }else{
        c=r;
        
    }
     int win=0, total=0;
    win= win+ (a+b+c);
    total=total +(p+q+r)/2;
    
    if(win>total){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

    }
    

    return 0;
}