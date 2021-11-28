#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    while(n--){
        if(n%10==4 || n%10==7){
            n=n/10;
        }
        else{
            break;
        }
    }
    
    return 0;
}