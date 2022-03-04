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
        int n,m;
        cin>>n>>m;
        int *arr = new int[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}