#include<iostream>
#include<math.h>

#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x ;
        cin>>x;
        int output1= (int)sqrt(x) + (int)cbrt(x);
        int output2= (int)(sqrt(cbrt(x)));
        cout<<output1-output2<<"\n";
    }
    return 0;
}