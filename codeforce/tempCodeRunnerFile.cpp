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
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            v1.push_back(b);
        }
        int temp;
        for(int i=0;i<v1.size();i++){
            if(v1[i]<v2[i]){
                temp = v1[i];
                v1[i]=v2[i];
                v2[i]=temp;
            }
        }
       int max1= max_element(v1.begin(),v1.end());
       int max2 = max_element(v2.begin(),v2.end());
       cout<<max1*max2<<"\n";
    }
    return 0;
}