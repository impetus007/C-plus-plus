// // Linked List implementation in c++

// #include<bits/stdc++.h>
// using namespace std;
// //why we need to use structure
// // Ans :- because we have to use mixed data type
// //we can use class in place of struct but it will increase length of program
// struct node{
//     int data;
//     node *next;
//     //constructor to use node
//     node(int x){
//         data = x;
//         next = NULL;
//     };
// };
// int main(){
//     node *head = new node(10);
//     node *temp1 = new node(20);
//     node *temp2 = new node(30);
//     head -> next = temp1;
//     temp1 -> next = temp2;
//     return 0;
// }

// //short implementation
// int main(){
//     node *head = new node(10);
//     head -> next = new node(20);
//     head -> next = new node(30);
//     return 0;
// }

//Traversing a singly linked list in c++
//time complexity and auxillary space big o n
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// void printList(Node *head){
//     Node *curr = head;
//     while(curr!= NULL){
//         cout<< (curr ->data) <<" ";
//         curr=curr ->next;
//     }
// }
//or
//Recursive Display of Linked List
// void rPrint(Node *head){
//     if(head == NULL)
//     return;
//     cout<<(head -> data)<<" ";
//     rPrint(head -> next);
// }
// int main(){
//     Node *head = new Node(10);
//     head -> next = new Node(20);
//     head ->next ->next = new Node(30);
//     head -> next ->next -> next = new Node(40);
//     printList(head);
//     return 0;
// }
 
 //Insert at Begining of Singly linked List
 // time complexity big o n;
// struct node{
//      int data;
//      node *next;
//      node(int x){
//          data=x;
//          next=NULL;
//      }
//  };
//  node *insertBegin(node *head , int x){
//      node *temp = new node(x);
//      temp -> next = head;
//      return temp;
//  }
// int main(){
//      node *head;
//      head = insertBegin(head , 30);
//      head = insertBegin(head , 20);
//      head = insertBegin(head , 40);
//      return 0;
//  }

// Delete first Node in singly Linked list
//time complexity big o 1
// node *delhead(node *head){
//     if(head == NULL)
//     return NULL;
//     else{
//         node *temp = head -> next;
//         delete head;
//         return temp;
//     }
// }

// Delete Last Node in singly linked List
//NOte:- In java memory deallocat automatically but when you in c++ u have to used deallocat memory
//time complexity is theta n
node *delLast( node * head){
    if(head == null)
    return NULL;
    if(head -> next == NULL ){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr -> next -> next != NULL )
    curr = curr -> next;
    delete ( curr -> next);
    curr -> next = NULL;
    return head;
}



