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

// #include<iostream>
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



// write a program to find out prime no between two no
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b , n;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     for(int num=a; num<b; num++){
//         int i;
//         for(i=2; i<num ; i++){
//             if(num%i==0){
//                break;
//             }
//         }
//         if(i==num){
//             cout<<"wow! you find prime no "<<num <<endl;
//         }
//     }
//     return 0;
// }


//write a program to print all odd no till n
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter a no :";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         if(i%2!=0){
//             cout<<i<<endl;
//         }
//     }
// return 0;   
// }

//**************** switch case statement *********

// #include<iostream>
// using namespace std;
// int main(){
//     char button;
//     cout<<"Input a character"; 
//     cin>>button;
//     switch (button)
//     {
//     case 'a':
//     cout<<"hello"<<endl;
//     break;
//     case 'b':
//     cout<<"namaste"<<endl;
//     break;
//     case 'c':
//     cout<<"salute"<<endl;
//     break;
//     case 'd':
//     cout<<"Hola"<<endl;
//     break;
//     case 'e':
//     cout<<"ciao"<<endl;
//     break;
//     default:
//     cout<<"I m still learning more!"<<endl;
//         break;
//     }
//     return 0;
// }

// write a program to use of a basic arithmetic operator
// #include<iostream>
// using namespace std;
// int main(){
//     int n1 , n2 ;
//     cout<<"Enter a first no :";
//     cin>>n1;
//     cout<<"Enter a second no :";
//     cin>>n2;
//     char op;
//     cout<<"Enter a operator sign :";
//     cin>>op;
//     switch (op)
//     {
//     case '+':
//     cout<<"Addition of given no :"<<n1+n2<<endl;
//     break;
//     case '-':
//     cout<<"Subtraction of given no :"<<n1-n2<<endl;
//     break;
//     case '*':
//     cout<<"Multiplication of given no :" <<n1*n2<<endl;
//     break;
//     case '/':
//     cout<<"Division of given no :"<<n1/n2 <<endl;
//     break;
//     default:
//     cout<<"Pls use one of these operator + , - , * , / "<<endl;
//         break;
//     }
//     return 0;
// }

//write a program wheather input alphabet is vowel or consonant
// #include<iostream>
// using namespace std;
// int main(){
//     char alphabet;
//     cout<<"Enter a alphabet :";
//     cin>>alphabet;
//     switch (alphabet)
//     {
//     case 'a':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'e':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'i':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'o':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'u':
//     cout<<"It's a vowel" <<endl;
//     break;
//     default:
//     cout<<"Its a consonant"<<endl;
//     break;
//     }
//     return 0;
// }

//******** pre incrementer(++a)
// int a=10;
// int b;
// b=++a;
// cout<<a<<<" "<< b <<endl;
// output:-
// a =11;
// b= 11;


//******* post incrementor(a++)
// int a=10;
// int b;
// b=a++;
// cout << a <<" "<<b <<endl;
// output :- 
// a=11;
// b=10;


//some examples

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     i = i++ + ++i ;  //i=4
//     cout<<i<<endl;   
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1 , j=2 , k;
//      k= i+j+ i++ + j++ + ++i + ++j;
//      cout<< i <<" "<< j <<" "<<k <<endl;
//      return 0;
// }

//********* Relational operator ********

//write to program to compare two no is greater , lesser or equal
// #include<iostream>
// using namespace std;
// int main(){
//     int a  , b;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     if(a>b){
//         cout<<"First no is greater than second and it's value is :"<<a<<endl;
//     }else if(a<b){
//         cout<<"Second no is greater than first and it's value is :"<<b<<endl;
//     }else{
//         cout<<"Both no are equal"<<endl;
//     }
//     return 0;
// }

//******** Logical operator **********

//write a program to output wheather a number is divisible by both 2 and 3 or divisible by only one of them.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no :";
//     cin>>n;
//     if(n%2==0 && n%3==0){
//         cout<<"No is divisible by both no 2 and 3 ";
//     }else if(n%2==0){
//         cout<<"No is divisible by 2";
//     }else if(n%3==0){
//         cout<<"No is divvisible by 3";
//     }else{
//         cout<<"aww aww.. no is neither divisible by 2 nor 3";
//     }
//     return 0;
// }











