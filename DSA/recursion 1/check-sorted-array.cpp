// Method :-1
// #include<iostream>
// using namespace std;
// bool is_sorted(int a[], int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if(a[0]>a[1]){
//         return false;
//     }
//     bool issmallSorted = is_sorted(a+1, size-1);
//     return issmallSorted;
// }
// int main(){
//     int size;
//     cin>>size;
//     int a[5]={1 , 2 , 3, 4, 5};
//     cout<<is_sorted(a, size);
// }

// Method :- 2
#include<iostream>
using namespace std;
bool isSorted(int a[], int size){
    if(size==0 || size==1){
        return true;
    }
    bool isSmallSorted = isSorted(a+1, size-1);
    if(!isSmallSorted){
        return false;
    }if (a[0]>a[1])
    {
        /* code */
        return false;
    }else{
        return true;
    }
    
}
int main(){
    int size;
    cin>>size;
    int a[5] = { 10 , 12 ,3, 12 ,56};
    cout<<isSorted(a, size);
}