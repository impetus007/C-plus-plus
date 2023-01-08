// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// bool checkprime(int n)
// {
//     if (n <= 1)
//         return false;

//     // Check from 2 to square root of n
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0)
//             return false;

//     return true;
// }

// bool isPerfectSquare(long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {

//         long long sr = sqrt(x);

//         // if product of square root
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         if(a==4)
//         cout<<"YES\n";
//         else if(a%2==0)
//         cout<<"NO\n";
//         else if(isPerfectSquare(a) and checkprime(sqrt(a)))
//         cout<<"YES\n";
//         else
//         cout<<"NO\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
int arr[(int)1e6 + 10];
set<int> tprime;
void t_prime()
{
    tprime.insert(4);
    for (int i = 3; i < (int)1e6 + 1; i += 2)
    {
        if (arr[i] == 0)
        {
            tprime.insert(i * i);
            for (int j = 1; j <= 1e6; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}
signed main()
{
    int t;
    cin >> t;
    t_prime();
    while (t--)
    {
        int x;
        cin >> x;
        if (tprime.find(x) != tprime.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}