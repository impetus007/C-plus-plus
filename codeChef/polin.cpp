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
       int t1;
       cin>>t1;
       set<int> s1;
       set<int> s2;
       while(t1--){
           int a,b;
           cin>>a>>b;
           s1.insert(a);
           s2.insert(b);
       }
       cout<<s1.size()+s2.size()<<endl;
       s1.clear();
       s2.clear();

    }
    return 0;
}