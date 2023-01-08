// oops
// oops it is programming type where things revolve around objects. object have entity which have thier own state/ property and behaviour.
// whhy we want use oops ? // ans :- increase readablity , simplicity, manageibility.
// ex:-hero with some propertioes like name , health , level and behavior is attack, defence , dance
// class :- int a, string s, char ch, hero ramesh we make a hero type object class is user defined data type.
// object :- instance of class


#include <iostream>
using namespace std;

class Hero
{
    // propertiess
public:
    int health;
    // int size;
    // double a;
};

int main()
{

    // creation of object
   // Hero h1; // statically
   Hero *h1= new Hero;// dynamically alloaction

   
    cout<<h1.health<<"\n";
    cout << "size " << sizeof(h1) << "\n";
    return 0;
}

// empty class m 1 bit allocate hoti h
// access modifier :- public , private, protected.
// getter and setter to access private properties in class
// padding and greedy alignment
// static alloaction and dynamic allocation
//(*b) // deference or b->
// when ever  object create constructor called and cons. is no return type.
// Hero ramesh // default constructor :- ramesh.hero();
// parameterised constructor
// copy construtor
//swallow or depe copy
