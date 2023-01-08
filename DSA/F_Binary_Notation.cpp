#include <iostream>
#include<string>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    string s;
    while (t >= 1)
    {
        int x=t%2;
        s += x+'0';
        t /= 2;
    }
 
    reverse(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}