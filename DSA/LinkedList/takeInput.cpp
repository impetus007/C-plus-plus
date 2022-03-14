#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node *takeinput_better()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            // head->next = newNode;
            // node *temp = head;
            // while (temp->next != NULL)
            // {
            //     temp = temp->next;
            // }
            // temp->next = newNode;
            tail->next = newNode;
            tail = tail->next;
            // or
            // tail =newNode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // node n1(5);
    // node *head = &n1;
    // cout << n1.data << " " << head << "\n";

    node *head = takeinput_better();
    print(head);
}