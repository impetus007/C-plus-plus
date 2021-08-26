//************jai shree krishna**********
//write a program to print hello world
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     return 0;
// }




//****************decision making if/else*****************

//write a program to find a person eligible for vote or not
// #include<iostream>
// using namespace std;
// int main(){
//     int a,age=18;
//     cout<<"Enter your age : " ;
//     cin>>a;
//     if(a>age){
//         cout<<"congratulation! you are eligible for vote" <<endl;
//     }else{
//         cout<<"aww aww.. sorry you are not eligible for vote"<<endl;
//     }
//     return 0;
// }


//***************else if**************

//write a program to compare two numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter a first no :" ;
//     cin>>x;
//     cout<<"Enter a second no :";
//     cin>>y;
//     if(x>y){
//         cout<<"first no is greater than second and its value is "<<x;
//     }
//     else if(x==y){
//         cout<<"Both no are equal and their value is " <<x;
//     }else{
//         cout<<"Second no is greater than first and it's value is "<<y;
//     }
//     return 0;
// }


// ************for loop**************

// write a program to find out the sum of n no
// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum=0;
//     cout<<"Enter a no : ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout << "Sum of no is :"<<sum ;
//     return 0;
// }

//********* while loop *********

// write s program to print a no till n 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout<<"Enter a no :";
//     cin>>n;
//     while(n>0){
//         cout<<i<<endl;
//         i++;
//         n--;
//     }
//     return 0;
// }


//********** do while *********

// #include <iostream>
// using namespace std;
//  int main()
// {
// int i = 1;
//  do {
//     cout << i << endl;
//     i++;
//     }while (i <= 5);
//     return 0;
// }


//program on continue and break 

// #include<iostream>
// using namespace std;
// int main(){
//     int pocketmoney=3000;
//     for( int date =1 ; date<=30;date++){
//         if(date%2==0){
//             continue;
//         }
//         if(pocketmoney==0){
//             break;
//         }
//         cout<<"Go out today!"<<endl;
//         pocketmoney=pocketmoney-300;
//     }
//     return 0;
// }


//write a program to checkout prime no 

// #include<iostream>
// using namespace std;
// int main(){
//     int n , i;
//     cout<<"Enter a no :";
//     cin>>n;
//     for( i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"aww aww sorry no is not prime";
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"wow! no is prime";
//     }
//     return 0;
// }
