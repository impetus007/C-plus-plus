#include<bits/stdc++.h>
using namespace std;
void printSubsquences(string input, string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    printSubsquences(input.substr(1), output);
    printSubsquences(input.substr(1), output+input[0]);
}
int main(){
    string input;
    cin>>input;
    string output="";
    printSubsquences(input, output);
}