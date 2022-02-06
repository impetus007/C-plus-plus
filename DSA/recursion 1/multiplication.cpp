#include<iostream>
using namespace std;
int multiply(int n , int m){
    return n*m;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<multiply(n,m)<<endl;
}