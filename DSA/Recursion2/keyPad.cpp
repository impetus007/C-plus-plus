#include<bits/stdc++.h>
using namespace std;
int keyPad(int num, int output[]){
    if(num==0){
        output[0]='';
        return 1;
    }
    int n=num%10;
    num/=10;
    int smallOutputSize = keyPad(num, output);
    string input;
    switch (n)
    {
    case 2 :
    input = "abc";
        break;
         case 3 :
    input = "def";
        break;
         case 4 :
    input = "ghi";
        break;
         case 5 :
    input = "jkl";
        break;
         case 6 :
    input = "mno";
        break;
         case 7 :
    input = "pqrs";
        break;
         case 8 :
    input = "tuv";
        break;
         case 9 :
    input = "wxyz";
        break;
    default:
        break;
    }
    string temp[input.size()];
    int k=0;
    for(int i=0;i<smallOutputSize;i++){
        for(int j=0;j<input.size();j++){
            temp[k]=output[i]+input[j];
            k++;
        }
    }
    for(int i=0;i<)

}

int main(){
    int num;
    cin>>num;
    string output[1000];
    int count = keyPad(num, output);
    for(int i=0;i<count && i<1000;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}