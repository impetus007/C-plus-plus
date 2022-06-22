// C++ program of the above approach
#include <bits/stdc++.h>
using namespace std;

// Function that print two numbers with
// the sum X and maximum possible LCM
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void maxLCMWithGivenSum(int X)
{
    // variables to store the result
    int A, B;

    // If X is odd
    if (X & 1)
    {
        A = X / 2;
        B = X / 2 + 1;
    }

    // If X is even
    else
    {

        // If floor(X/2) is even
        if ((X / 2) % 2 == 0)
        {
            A = X / 2 - 1;
            B = X / 2 + 1;
        }

        // If floor(X/2) is odd
        else
        {
            A = X / 2 - 2;
            B = X / 2 + 2;
        }
    }

    // Print the result
    // int LCM = A + B;
    // cout << A << " " << B << "\n";
    int LCM = lcm(A, B);
    int GCD = gcd(A, B);
    cout << LCM - GCD << "\n";
}

// Driver Code
int main()
{
    // Given Number
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        maxLCMWithGivenSum(x);
    }
    // Function call

    return 0;
}
