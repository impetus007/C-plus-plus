// write. a program in c++ to sort a number used separate function to read 
//  and display the numbers and used passing/ call by reference 



// Exercise from 2.1 to 2.5
#include<bits/stdc++.h>
using namespace std;
void ques1(){
    int maths= 90;
    int physics = 77;
    int chemistry = 69;
    cout<<"Maths : "<<maths<<"\n";
    cout<<"Physics :"<<physics<<"\n";
    cout<<"chemistry :"<<chemistry<<"\n";
}
void ques2(){
    int a , b;
    cin>>a>>b;
    if(a>=b)
    cout<<"Larger no is :"<<a<<"\n";
    else
    cout<<"Larger no is :"<<b<<"\n";
}
void ques3(){
    int n;
    cin>>n;
    while(n--){
        cout<<"WELL DONE"<<"\n";
    }
}
void ques4(){
    int a , b , c , x;
    cin>>a>>b>>c;
    x=a/b-c;
    cout<<"Calculation :"<<x<<"\n"; 
}
void ques5(){
    int f ; 
    float c;
    cin>>f;
    c = (f-32)*5;
    c=c/9;
    cout<<c<<"\n";
}
int main(){
    int ques;
    cout<<"enter your ques no : ";
    cin>>ques;
    switch (ques)
    {
    case 1:
    ques1();
    break;
    case 2:
    ques2();
    break;
    case 3:
    ques3();
    break;
    case 4:
    ques4();
    break;
    case 5:
    ques5();
    break;
    default:
        break;
    }
   return 0;
}

//using class 2.5
#include<bits/stdc++.h>
using namespace std;
class temp{
// access specifier
public:
int fah;
void celsius(){
    float c;
    c= (fah-32)*5;
    c=c/9;
    cout<<c<<"\n";
}
};
int main(){
    temp obj;
    obj.fah=40;
    obj.celsius();
}