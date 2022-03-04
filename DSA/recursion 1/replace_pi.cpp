#include<bits/stdc++.h>
using namespace std;
void replacePI(char input[]){
    int size=strlen(input);
    if(size<=1){
        cout<<input;
    }
    if(input[0]=='p' && input[1]=='i'){ 
       cout<<"3.14";
       replacePI(input.substr(2));
    }else{
        cout<<input[0];
        replacePI(input.substr(1));
    }
    
}

int main(){
    char input[10000];
    cin.getline(input, 10000);
    replacePI(input);
    cout<<input<<endl;
}