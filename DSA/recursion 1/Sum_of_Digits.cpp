// Try with online Ide
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    if(n<10 && n>=1){
        return n;
    }
    if(n==0){
        return 0;
    }
    int ans= n%10 + sumOfDigits(n/10);
}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
