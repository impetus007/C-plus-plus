#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'M' || a[a.size() - 1] == 'S' && b[b.size() - 1] == 'L' || a[a.size() - 1] == 'M' && b[b.size() - 1] == 'L')
        {
            cout << "<"
                 << "\n";
        }
        else if (a[a.size() - 1] == 'M' && b[b.size() - 1] == 'S' || a[a.size() - 1] == 'L' && b[b.size() - 1] == 'S' || a[a.size() - 1] == 'L' && b[b.size() - 1] == 'M')
        {
            cout << ">"
                 << "\n";
        }
        else if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'S' && a.size() > b.size() || a[a.size() - 1] == 'M' && b[b.size() - 1] == 'M' && a.size() > b.size() || a[a.size() - 1] == 'L' && b[b.size() - 1] == 'L' && a.size() < b.size())
        {
            cout << "<"
                 << "\n";
        }
        else if (a[a.size() - 1] == 'S' && b[b.size() - 1] == 'S' && a.size() < b.size() || a[a.size() - 1] == 'M' && b[b.size() - 1] == 'M' && a.size() < b.size() || a[a.size() - 1] == 'L' && b[b.size() - 1] == 'L' && a.size() > b.size())
        {
            cout << ">"
                 << "\n";
        }
        else
        {
            cout << "="
                 << "\n";
        }
    }
    return 0;
}