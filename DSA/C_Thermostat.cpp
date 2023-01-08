#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if (a == b)
        {
            cout << "0\n";
        }
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b - a >= x)
        {
            cout << "1\n";
        }
        // cout << "hi" << r - b<<"\n";
        else if (r - b>= x)
        {
            cout << "2\n";
        }
        else if (a - l >= x)
        {
            cout << "2\n";
        }
        else if (r - a >= x and b - l >= x)
        {
            cout << "3\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}