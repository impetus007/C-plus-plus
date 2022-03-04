#include<bits/stdc++.h>
using namespace std;
int stringToNumber(char input[]){
    stringstream str(input);

    int x=0;
    str>>x;
    return str;
}
int main(){
   char input[50];
   cin>>input;
   cout<<stringToNumber(input)<<endl;
}