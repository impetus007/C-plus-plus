#include <bits/stdc++.h>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void print(){
        cout<<real<<" +i"<<img<<"\n";
    }
    void add(complex c2)
    {
        real = real + c2.real;
        img = img + c2.img;
    }
    void multiply(complex c2)
    {
        real = real * c2.real - img * c2.img;
        img = real * c2.img + img * c2.real;
    }
};
int main()
{
    int real1, real2, img1, img2;
    cin >> real1 >> real2 >> img1 >> img2;

    complex c1(real1, img1);
    complex c2(real2, img2);
    int choice;
    cin>>choice;
    if(choice==1){
        c1.add(c2);
        c1.print;
    }else if(choice==2){
        c1.multiply(c2);
        c1.print();
    }else{
        return 0;
    }
}