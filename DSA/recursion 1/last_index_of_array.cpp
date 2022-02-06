#include<bits/stdc++.h>
using namespcace std;

int lastIndex(int input[], int n, int x){
//     if(n==0){
//         return -1;
//     }
//     int ans = lastIndex(input+1, n-1, x);
//    return ans;
if(n==0){
    return -1;
    int ans= lastIndex(input+1, n-1, x);
    if(input[0]==x){
        return n+1;
    }else{
        return -1;
    }
}


}
int main(){
    int n;
    cin>>n;
    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<lastIndex(input,n,x)<<"\n";
}