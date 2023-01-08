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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int moves = 0;
        int turn = 0;
        int lst[2] = {}; // last turn value
        int tot[2] = {}; // total value;
        int st(0), en(n - 1);
        while (st <= en)
        {
            int curr = 0;
            if (turn == 0)
            {
                bool done = 0;
                for (int i = st; i <= en; i++)
                {
                    if (curr > lst[1])
                    {
                        st = i;
                        done = 1;
                        break;
                    }
                    else
                    {
                        curr += v[i];
                    }
                }
                if (!done)
                {
                    st = en + 1;
                }
            }
            else
            {
                bool done = 0;
                for (int i = en; i >= st; --i)
                {
                    if (curr > lst[0])
                    {
                        en = i;
                        done = 1;
                        break;
                    }
                    else
                    {
                        curr += v[i];
                    }
                }
                if (!done)
                {
                    en = st - 1;
                }
            }
            tot[turn] += curr;
            lst[turn] = curr;
            moves++;
            turn = 1 - turn;
        }
        cout << moves << " " << tot[0] << " " << tot[1] << "\n";
    }
    return 0;
}