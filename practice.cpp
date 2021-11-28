// // #include<iostream>
// #include<stdio.h>
// // using namespace std;
// int main(){
//    int n;
// //    cin>>n;
//     scanf("%d" ,&n);
//     for(int i=1;i<=n;i++){
//        for(int j=0;j<n-i;j++){
//         //    cout<<"  ";
//            printf("%s" , "  ");
//        }
//        int count=0;
//        for(int j=i;j<=2*i-1;j++){
           
//            if(j>9){
//             //    cout<<count;
//                printf("%d" , count);
//                printf("%s" , " ");
//                count++;
//            }else{
//         //    cout<<j<<" ";
//            printf("%d" , j);
//            printf("%s" , " ");
//            }
//         }int sum=2;
//         for(int j=2*i-2 ;j>=i;j--){
//              if(j>9){
//             //    cout<<sum<<" ";
//             printf("%d" , sum);
//             printf("%s" , " ");
//                sum--;
               
//            }else{
//         //    cout<<j<<" ";
//         printf("%d" , j);
//         printf("%s" , " ");
//            }
//         }
//        printf("\n");
//    }
//     return 0;   
// }

#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    bool flag=true;
    while(n>0)
    {
        if((n%10)==4||(n%10)==7)
        {
           continue;
        }
        else{
             flag=false;
            break;
        }
        n=n/10;
    }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}