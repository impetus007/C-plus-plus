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
        // int n;
        // cin >> n;
        // vector<int> v;
        // for (int i = 0; i < n; i++)
        // {
        //     int a;
        //     cin >> a;
        //     v.push_back(a);
        // }
        // int is, jl;
        // // if (n % 2 == 0)
        // // {
        // //     is = (n / 2) - 1;
        // //     jl = (n / 2);
        // // }
        // // else
        // // {
        // //     is = (n / 2);
        // //     jl = (n / 2) + 1;
        // // }
        // int first = INT_MIN;
        // int fi = 0, si = 0;
        // int second = INT_MAX;
        // for (int i = 1; i < n; i += 2)
        // {
        //     if (first < abs(v[i]))
        //     {
        //         first = abs(v[i]);
        //         fi = i;
        //     }
        // }
        // for (int i = 0; i < n; i += 2)
        // {
        //     if (second > abs(v[i]))
        //     {
        //         second = abs(v[i]);
        //         si = i;
        //     }
        // }
        // swap(v[fi], v[si]);
        // int ans = 0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (i % 2 == 0)
        //     {
        //         ans += abs(v[i]);
        //     }
        //     else
        //     {
        //         ans -= abs(v[i]);
        //     }
        // }
        // cout << ans << "\n";

        // logic:-2
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = 1;
        int max = abs(arr[1]);
        for (int i = 1; i < n; i += 2)
        {
            if (abs(arr[i]) > max)
            {
                max = abs(arr[i]);
                maxi = i;
            }
        }
        int mini = 0;
        int min = abs(arr[0]);
        for (int i = 0; i < n; i += 2)
        {
            if (abs(arr[i]) < min)
            {
                min = abs(arr[i]);
                mini = i;
            }
        }
        if (max > min)
        {
            int temp = arr[mini];
            arr[mini] = arr[maxi];
            arr[maxi] = temp;
        }
        int sume = 0, sumo = 0;
        for (int i = 0; i < n; i += 2)
        {
            sumo += abs(arr[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            sume += abs(arr[i]);
        }
        cout << sumo - sume << "\n";
    }
    return 0;
}