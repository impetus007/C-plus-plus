// find out and return the number of digits present in a number recursively.
#include<iostream>
using namespace std;

int digits(int n){
    if(n<10){
        return 1;
    }
    return 1 + digits(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<digits(n)<<endl;
}