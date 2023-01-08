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
        int n, m;
        cin >> n >> m;
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            pq.push(temp);
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            pq.pop();
            pq.push(temp);
        }
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << "\n";
    }
    return 0;
}
