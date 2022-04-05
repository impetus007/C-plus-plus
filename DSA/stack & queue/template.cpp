#include <bits/stdc++.h>
using namespace std;
template <typename T, typename V>
class Pair
{
    T x;
    V y;

public:
    void setx(T x)
    {
        this->x = x;
    }
    T getx()
    {
        return x;
    }
    void sety(V y)
    {
        this->y = y;
    }
    V gety()
    {
        return y;
    }
};
int main()
{
    Pair<Pair<int, int>, int> p2;
    p2.sety(10);
    Pair<int, int> P4;
    P4.setx(5);
    P4.sety(9);
    p2.setx(P4);
    cout << p2.getx().getx() << " " << p2.getx().gety() << " " << p2.gety() << "\n";
}

// #include <bits/stdc++.h>
// using namespace std;
// template <typename T, typename V>
// class Pair
// {
//     T x;
//     V y;

// public:
//     void setx(T x)
//     {
//         this->x = x;
//     }
//     T getx()
//     {
//         return x;
//     }
//     void sety(V y)
//     {
//         this->y = y;
//     }
//     V gety()
//     {
//         return y;
//     }
// };
// int main()
// {
//     Pair<Pair<int, int>, int> p2;
//     p2.sety(10.56);
//     Pair<int, int> p4;
//     p4.setx(5);
//     p4.sety(9.6);
//     p2.setx(p4);
//     cout << p2.getx().getx() << " " << p2.getx().gety() << " " << p2.gety() << "\n";
// }
