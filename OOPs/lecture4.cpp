// reference variable




// Call by refernce
#include<iostream>
using namespace std;
void swap(int &, int &);
void swap(int * , int *);
int main(){
    int a=10, b=20;
    swap(a ,b);

}
