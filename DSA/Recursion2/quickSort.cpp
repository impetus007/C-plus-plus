#include<bits/stdc++.h>
using namespace std;

void quickSort(int input[], int )

int main(){
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    quickSort(input, n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    delete [] input;
}