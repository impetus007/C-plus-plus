#include<iostream>
using namespace std;

bool helper(char input[], int start, int end){
    if(end==0 || end==1){
        return true;
    } 
    if(input[start]==input[end]){
        return helper(input+1,start+1,end-1);
    }else{
        return false;
    }
}

bool checkPalindrome(char input[]){
  int size=strlen(input);
  if(size==0 || size==1){
      return true;
  }if(input[0]==input[size-1]){
      return true;
  }else{
      int start=0;
      int end=size-1;
      return helper(input, start+1, end-1);
  }
}
int main(){
    char input[50];
    cin>>input;
    if(checkPalindrome(input)){
        cout<<"true"<<"\n";
    }else{
        cout<<"false"<<"\n";
    }
}