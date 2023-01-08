// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         vector<int> v;
//         bool flag = false;
//         for (int i = 1; i <= a; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 v.push_back(i + b);
//             }

//             else
//             {
//                 v.push_back(i);
//             }
//         }
//         for (int i = 0; i < v.size(); i = i + 2)
//         {
//             if ((v[i] * v[i + 1]) % 4 == 0)
//             {
//                 flag = true;
//             }
//         }
//         if (flag)
//         {
//             cout << "YES\n";
//             for (int i = 1; i <= v.size(); i = i + 2)
//             {
//                 if ((v[i] * v[i - 1]) % 4 == 0)
//                 {
//                     cout << i << " " << i + 1 << '\n';
//                 }
//             }
//             // for (int i = 1; i <= a; i = i + 2)
//             // {
//             //     //v[i] = i + b;
//             //     //cout << "Vector" << v[i] << "\n";
//             //     // if (v[i] % 4 == 0)
//             //     // {
//             //     //     cout << i + 1 << " " << i - 1 << "\n";
//             //     // }
//             // }
//             // cout<< vector;
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (i % 2 != 0)
//                 {
//                     v[i] = v[i] + b;
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
//             for (int i = 0; i < v.size(); i++)
//             {
//                 cout << "vector" << v[i] << "\n";
//             }
//             for (int i = 1; i <= v.size(); i = i + 2)
//             {
//                 if (v[i] % 4 == 0)
//                 {
//                     cout << i + 1 << " " << i << "\n";
//                 }
//             }
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        cin >> a;
        cin >> b;
        if (b % 4 == 0)
        {
            cout << "NO\n";
        }
        else if (b % 4 == 2)
        {
            cout << "YES\n";
            int x = 1;
            int y = 2;
            bool flag = true;
            while (x <= a && y <= a)
            {
                if (flag == true)
                {
                    cout << y << " " << x << endl;
                }
                else
                {
                    cout << x << " " << y << endl;
                }
                x = x + 2;
                y = y + 2;
                flag = !flag;
            }
        }
        else
        {
            cout << "YES\n";
            int x = 2;
            int y = 1;
            while (x <= a && y <= a)
            {
                cout << y << " " << x << endl;
                x = x + 2;
                y = y + 2;
            }
        }
    }
}