#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int f=n*a;
    int s=n/m * b +min((n%m)*a,b);
    cout<<min(f,s)<<"\n";
    return 0;
}