//fraction class 2/24
#include<iostream>
using namespace std;
class fraction{
 private :
 int num;
 int deno;
 public:
 fraction(int num, int deno){
     this->num = num;
     this -> deno = deno;
 }
 void print(){
     cout<< this -> num <<" / "<< this -> deno<<endl;
 }
 void simplify(){
     int gcd =1;
     int j= min(this -> num, this -> deno );
     for(int i=1;i<=j;i++){
         if(this->num % i ==0 && this-> deno %i==0){
             gcd =i;
         }
     }
     this -> num = this->num/gcd;
     this -> deno = this -> deno/gcd;

 }
 void add(fraction f2){
     int lcm = deno * f2.deno;
     int x= lcm/deno;
     int y = lcm/f2.deno;
     int nume = x*num + (y*f2.num);
     num = nume;
     deno = lcm;



    simplify();
 }
};
int main(){
fraction f1(10,2);
fraction f2(15,4);
f1.add(f2);
f1.print();
f2.print();
}