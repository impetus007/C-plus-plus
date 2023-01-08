#include <iostream>
using namespace std;
int main()
{
    int a[10];

    cout << "garbage " << a[-1] << "\n";
    return 0;
}