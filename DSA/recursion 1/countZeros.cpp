#include <iostream>
using namespace std;

int countZeros(int n) {
    // Write your code here
    if(n<10 && n>=1){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n%10==0){
        int ans = countZeros(n/10);
        return ans+1;
    }else{
        countZeros(n/10);
    }
 return 0;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
