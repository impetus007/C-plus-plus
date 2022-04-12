#include <bits/stdc++.h>
using namespace std;
class Read
{
    int n;
    int a[1001];

public:
    Read(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
};
int main()
{
    int n;
    cin >> n;
    Read R1(n);
}