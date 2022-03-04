//getter and setter
#include<iostream>
using namespace std;
class student{
     public :
     int rollNo;
     private :
     int age;
     public:
     void display(){
         cout<<age<<" "<<rollNo<<endl;
     }
     int getAge(){
         return age;
     }
     void setAge(int a){
         age=a;
     }
};
int main(){
 student s1;
 student *s2 = new student;
 s1.setAge(20);
 s2 -> setAge(23);
 s1.display();
 s2 -> display();

}