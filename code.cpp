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

//  square pattern 
//write a program for below output
//  * * * *
//  * * * *
//  * * * *
//  * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a side of square :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Rectangle pattern
// * * * * * *.......
// * * * * * *.......
// * * * * * *.......
// #include<iostream>
// using namespace  std;
// int main(){
//     int row , col;
//     cout<<"Enter a no of row :";
//     cin>>row;
//     cout<<"Enter a no of col :";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Hollow rectangle Pattern
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row , col;
//     cout<<"Enter a no of row :";
//     cin>>row;
//     cout<<"Enter a no of col :";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row){
//                 cout<<" * ";
//             }else if(j==1 || j==col){
//                 cout<<" * ";
//             }else{
//                 cout<<"   ";
//             }
//             }
//         cout<<endl;
//     }
// return 0;
// }

// inverted half pyramid
// * * * * *
// * * * * 
// * * * 
// * * 
// * 
// #include<iostream>
// using namespace std;
// int main(){
//     int row , col;
//     cout<<"Enter a row  :";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=row;j>=i;j--){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Half Pyramid after 180 degree Rotation
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row ;
//     cout<<"Enter a no of row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=row;j++){
//             if(j<= row-i){
//                 cout<<"   ";
//             }else{
//                 cout<<" * ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
 
 // Half pyramid using no
//  1
//  1 2 
//  1 2 3
//  1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter a no of Row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//  Floyd's Triangle
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//     int row , n=1;
//     cout<<"Enter a row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<n<<"  ";
//             n++;
//         }
//         cout<<endl;
//         }
//         return 0;
// }


// Butterfly Pattern
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a input  : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// Inverted pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
// #include<iostream>
// using namespace  std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//    return 0;
// }


// ****** 0-1 pattern
// 1
// 0 1 
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<" 1 ";
//             }else{
//                 cout<<" 0 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;  
// } 

// Rhombus pattern
//             *  *  *  *  *
//          *  *  *  *  *
//       *  *  *  *  *
//    *  *  *  *  *
// *  *  *  *  *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }for(int j=1;j<=n;j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }
// return 0;
// }


// Number pattern
//      1
//     1 2 
//    1 2 3
//  1 2 3 4
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Pallindromic pattern
//             1  
//          2  1  2  
//       3  2  1  2  3  
//    4  3  2  1  2  3  4  
// 5  4  3  2  1  2  3  4  5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j<<"  ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Star pattern
//              * 
//           *  *  * 
//        *  *  *  *  * 
//     *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  * 
//        *  *  *  *  * 
//           *  *  * 
//              * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Zig-Zag
//        *           *       
//     *     *     *     *    
//  *           *           * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && j%4==0)){
//                 cout<<" * ";
//             }else{
//             cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// check weather no is prime or not
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n ;
//     bool flag=0;
//     cout<<"Enter a no :";
//     cin>>n;
//      for(int i=2;i<sqrt(n);i++){
//             if(n%i==0){
//                 cout<<"aww aww... no is Non-prime ";
//                 flag=1;
//             break;
//             }
//     }
//     if(flag==0){
//         cout<<"wow! It's prime no";
//     }
//     return 0;
// }

// Reverse a given no
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse= reverse*10+lastdigit;
//         n=n/10;
//         }
//     cout<<"Reverse of given input is : "<<reverse<<endl; 
//     return 0;
// }


// ArmStrong no
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no :";
//     cin>>n;
//     int sum=0;
//     int original=n;
//     while(n>0){
//         int lastdigit=n%10;
//         sum+=pow(lastdigit,3);
//         n=n/10;
//     }
//     if(sum==original){
//         cout<<"Congrats! you find out Armstrong  no";
//     }else{
//         cout<<"Aww aww.. try next time . It's not a Armstrong";
//     }
//     return 0;
// }

// Functions
//prime no between two numbers
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isPrime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     for(int i=a;i<=b;i++){
//         if(isPrime(i)){
//             cout<< i<<endl;
//         }
//     }
//     return 0;
// }


// Fibannaci series (0,1,1,2,3,5,8,......)
// #include<iostream>
// using namespace std;
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     cout<<"Fibenacci series of "<<n<<" term is :- ";
//     for(int i=1;i<=n;i++){
//         cout<<t1<<",";
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter a no to terms : ";
//     cin>>n;
//     fib(n);
//     return 0;
// }


// Factorial of a number
// #include<iostream>
// using namespace std;
// void fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     cout<<"Factorial of "<<n<< " is : "<<factorial;
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     fact(n);
//     return 0;
// }


// calculate nCr
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cout<<"Attention number of item greater then number of items being chosen at a time .";
//     cout<<"Enter number of items :";
//     cin>>n;
//     cout<<"Enter number of items being chosen at a time.";
//     cin>>r;
//     int ans=fact(n)/(fact(n-r)*fact(r));
//     cout<<"Combination are :"<<ans;
//     return 0;
// }


// Pascal Triangle
// 1   
// 1 1 
// 1 2 1
// 1 3 3 1 
// 1 4 6 4 1
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cout<<"Enter a input :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Sum of Natural numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//    int ans=((n*(n+1))/2);
//     return ans;
// }
// int main(){
//     int n ;
//     cout<<"Enter an input :";
//     cin>>n;
//     cout<<"Sum of Given no is : "<<sum(n)<<endl;
//     return 0;
// }


// Pythagoras
// #include<iostream>
// using namespace std;
// bool check(int x , int y , int z){
//     int a = max(x,max(y,z));
//     int b,c;
//     if(a==x){
//         b=y;
//         c=z;
//     }else if(a==y){
//         b=x;
//         c=z;
//     }else{
//         b=x;
//         c=y;
//     }
//     if(a*a==b*b + c*c){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int x,y,z;
//     cout<<"Enter a first no :";
//     cin>>x;
//     cout<<"Enter a Second no :";
//     cin>>y;
//     cout<<"Enter a third no :";
//     cin>>z;
//     if(check(x,y,z)){
//         cout<<"wow! It's a Pythagorean Triplet";
//     }else{
//         cout<<"Aww aww... Not a Pythagorean Triplet";
//     }
//     return 0;
// }


// Binary to Decimal
// #include<iostream>
// using namespace std;
// int binarytoDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter a Binary no : ";
//     cin>>n;
//     cout<<"Decimal no of given binary no is "<<binarytoDecimal(n)<<endl;
//     return 0;
// }

// HexaDecimal to Decimal
// #include<iostream>
// using namespace std;
// int HexaDecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9'){
//             ans+=x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i<='B']){
//             ans+=x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string n;
//     cout<<"Enter a HexaDecimal no :";
//     cin>>n;
//     cout<<"Decimal no of given HexaDecimal is : "<<HexaDecimal(n)<<endl;
//     return 0;
// }


// Decimal to Binary
// #include<iostream>
// using namespace std;
// string DecimalToBinary(int n){
//     string ans;
//     string s;
//     while(n>=0){
//         ans=n/2;
//         s.append(ans);
//         n/=2;
//     }
//     string output;
//     for(int i=s.size();i>=0;i--){
//         output.append(s[i]);
//     }
//     return output
// }
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     cout<<"Binary no of given input :"<<DecimalToBinary(n)<<endl;
//     return 0;
// }


// Decimal to Hexadecimal


// Add two Binary no


// ******** Array
// Take a array as input and print it.
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter a length of Array.";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for( int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// return 0;
// }


// Find max and min no in Array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a length of array :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxNo= INT_MIN;
//     int minNo= INT_MAX;
//     for(int i=0;i<n;i++){
//         if(a[i]>maxNo){
//             maxNo=a[i];
//         }
//         if(a[i]<minNo){
//             minNo=a[i];
//         }   
//     }
//     cout<<"Maximum no in given no : "<<maxNo<<endl;
//     cout<<"Minimum no in given no :"<<minNo<<endl;
//     return 0;
// }

// aliter
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a length of array :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxNo= INT_MIN;
//     int minNo= INT_MAX;
//     for(int i=0;i<n;i++){
//         maxNo = max(maxNo , a[i]);
//         minNo = min(minNo , a[i]); 
//     }
//     cout<<"Maximum no in given no : "<<maxNo<<endl;
//     cout<<"Minimum no in given no :"<<minNo<<endl;
//     return 0;
// }

//************* Searching in Array.

//  Linear Search
// #include<iostream>
// using namespace std;
// int linearSearch(int a[], int n , int key){
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter an array length :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cout<<"Enter a no you r looking for :";
//     cin>>key;
//     cout<<linearSearch(a,n,key)<<endl;
//     return 0;
// }


// Binary Search { Array must be in sorted order. }
// #include<iostream>
// using namespace std;
// int binarySearch(int a[] , int n , int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid>key]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter a array length :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//     cin>>a[i];
//     }
//     int key;
//     cout<<"Enter a no you are looking for :";
//     cin>>key;
//     cout<<binarySearch(a , n , key)<<endl;
// return 0;
// }

// ********** Sorting of Arrays

// Selection sort









