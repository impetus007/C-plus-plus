#include <bits/stdc++.h>
using namespace std;
class stackusingArray
{
    int *data;
    int capacity;
    int newindex;

public:
    stackusingArray(int totalsize)
    {
        data = new int[totalsize];
        newindex = 0;
        capacity = totalsize;
    }
    // return the number of element present in my stack
    int size()
    {
        return newindex;
    }

    bool isempty()
    {
        // if(newindex==0){
        //     return true;
        // }else{
        //     return false;
        // }
        return newindex == 0;
    }

    // insert element
    void push(int element)
    {
        if (newindex == capacity)
        {
            cout << "stack is full"
                 << "\n";
            return;
        }
        data[newindex] = element;
        newindex++;
    }

    // delete element
    int pop()
    {
        if (isempty())
        {
            cout << "stack is empty"
                 << "\n";
            return INT_MIN;
        }
        newindex--;
        return data[newindex];
    }

    // top

    int top()
    {
        if (isempty())
        {
            cout << "stack is empty"
                 << "\n";
            return INT_MIN;
        }
        return data[newindex - 1];
    }
};
int main()
{
    stackusingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.top() << "\n";
    cout << s.pop() << "\n";
    cout << s.pop() << "\n";
    cout << s.size() << "\n";
    cout << s.isempty() << "\n";
}
