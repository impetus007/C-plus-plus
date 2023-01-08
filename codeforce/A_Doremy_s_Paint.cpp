#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int> v;
        set<int> s;
        int count = 0;
        int l = INT_MAX, r = 0;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
            if (s.size() + count != v.size())
            {
                // int x = v.size()-2;
                int y = v.size();
                count++;
                l = min(l, x);
                r = max(r, y);
            }
        }
        
        if (l == INT_MAX or r == 0 or l == 0)
        {
            cout << "1"
                 << " " << v.size() << "\n";
        }
        else
        {
            cout << l << " " << r << "\n";
        }
    }
    return 0;
}