// #include<iostream>
#include<stdio.h>
// using namespace std;
int main(){
   int n;
//    cin>>n;
    scanf("%d" ,&n);

  
   
   for(int i=1;i<=n;i++){
       
       
       for(int j=0;j<n-i;j++){
        //    cout<<"  ";
           printf("%s" , "  ");
       }
       int count=0;
       for(int j=i;j<=2*i-1;j++){
           
           if(j>9){
            //    cout<<count;
               printf("%d" , count);
               printf("%s" , " ");
               count++;
           }else{
        //    cout<<j<<" ";
           printf("%d" , j);
           printf("%s" , " ");
           }
        }int sum=2;
        for(int j=2*i-2 ;j>=i;j--){
             if(j>9){
            //    cout<<sum<<" ";
            printf("%d" , sum);
            printf("%s" , " ");
               sum--;
               
           }else{
        //    cout<<j<<" ";
        printf("%d" , j);
        printf("%s" , " ");
           }
        }
       printf("\n");
   }
    return 0;   
}