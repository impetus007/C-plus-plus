#include<bits/stdc++.h>
using namespace std;
void printKeypad(int num, string output, string options[]){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    int n= num%10;
    num= num/10;
    string s=output[n];
    for(int i=0;i<s.size();i++){
        printKeypad(num, s[i]+output, options );
    }
}
int main(){
    int num;
    cin>>num;
    string output="";
    string options[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    printKeypad(num,output, options);
}