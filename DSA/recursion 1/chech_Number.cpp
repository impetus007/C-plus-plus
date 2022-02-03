//Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.

#include<iostream>
using namespace std;

bool  checkNumber(int input[], int n, int x){
    if(n==1){
        return input[0];
    }
    checkNumber(input+1,n-1,x);
    bool flag=false;
    if(input[0]==x){
        flag=true;
        return flag;
    }
    return flag;
}

int main(){
 int n;
 cin>>n;
 int *input =new int[n];
 for(int i=0;i<n;i++){
     cin>>input[i];
 }
 int x;
 cin>>x;
 if(checkNumber(input, n , x)){
     cout<<"true"<<endl;
 }else{
     cout<<"false"<<endl;
 }
 
}