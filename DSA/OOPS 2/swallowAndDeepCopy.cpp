// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     int age;
//     char *name;

// public:
//     student(int age, char *name)
//     {
//         this->age = age;
//         // swallow copy :- store address
//         //  this ->name = name;
//         // Deep Copy
//         this->name = new char[strlen(name) + 1];
//         strcpy(this->name, name);
//     }

//     student(student const &s){
//         this->age=s.age;
//         //this->name=s.name; swallow copy

//         //deep copy
//         this->name =new char[strlen(name)+1];
//         strcpy(this->name,s.name);

//     }
//     void display()
//     {
//         cout << name << " " << age;
//     }
// };
// int main()
// {
//     char name[] = "abcd";
//     student s1(20, name);
//     s1.display();
//     student s2(s1);
//     s2.name[0]='x';
//     s1.display();
//     s2.display();
//     // name[2] = 'e';
//     // student s2(24, name);
//     // s2.display();
//     // s1.display();

// }
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a)
    {
    }
};

int main()
{
    Student s1(100, 23);
    s1.x = s1.age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}