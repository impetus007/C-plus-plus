#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
  int age;
  int rollNo;  
};
int main(){
    Student s1;
    Student s2, s3;
    Student *s4 = new Student;
    (*s4).age=100;
    (*s4).rollNo=234;

    cout<<((*s4).age)<<" "<<(*s4).rollNo<<"\n";

}