#include<iostream>
using namespace std;
int main(){
    int n , i=1;
    cout<<"Enter a no :";
    cin>>n;
    while(n>0){
        if(i%2==0){
            continue;
        }else{
            cout <<i <<endl;
            i++;
            n--;
        }
        
    }
    return 0;   
}