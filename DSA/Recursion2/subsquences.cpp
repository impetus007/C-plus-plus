#include<bits/stdc++.h>
using namespace std;


int subsquences(string input,string output[]){
    if(input.empty()){
        output[0]="";
        return 1;
    }
    int small = subsquences(input.substr(1),output);
    for(int i=0;i<small;i++){
        output[i+small]=input[0]+output[i];
    }
    return 2*small;

}


int main(){
    string input;
    cin>>input;
    string *output = new string[1000];
    int count = subsquences(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<"\n";
    }
    return 0;
}