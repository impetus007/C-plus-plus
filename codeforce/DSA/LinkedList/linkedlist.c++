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
// node *delLast( node * head){
//     if(head == null)
//     return NULL;
//     if(head -> next == NULL ){
//         delete head;
//         return NULL;
//     }
//     Node *curr = head;
//     while(curr -> next -> next != NULL )
//     curr = curr -> next;
//     delete ( curr -> next);
//     curr -> next = NULL;
//     return head;
// }

//Search in Linked List(Iterative and Recursive)
//time complexity is big of n in both cases ( iterative and recursively )
//Iterative
// int search(node *head , int x){
//     int pos=1;
//     node *curr =head;
//     while(curr != NULL){
//         if(curr->data == x) 
//         return x;
//         else{
//             pos++;
//             curr=curr->next;
//         }
//     }
//   return -1;
// }
// Recursively
// int search(node *head , int x){
//     if(head==NULL)
//     return -1;
//     if(head -> data == x){
//         return 1;
//     }else{
//         int res = search(head -> next , x);
//         if(res == -1)
//         return -1;
//         else
//         return(res+1);
//     }
// }

//Doubly Linked List 
// struct node{
//     int data;
//     node *prev;
//     node *next;
//     node(int d){
//         data = d;
//         prev = NULL;
//         next = NULL;
//     }
// };

// int main(){
//     node *head = new node(10);
//     node *temp1 = new node(20);
//     node *temp2 = new node(30);
//     head -> next = temp1;
//     temp1 -> prev = head;
//     temp1 -> next = temp2;
//     temp2 -> prev = temp1;
// }


// singly vs doubly linked list
//Advantage(Doubly) :- can be traversed in both directioons
// A given delete a node in O(1) time with given reference pointer to it
 //INsert delete before a given node
 // Insert delete from both ends in O(1) time by maintaing tail.
// Disadvantage :- extra space for prev
// code becomes more complex

// Insert at Begining of DLL ( Doubly Linked list)
// node *insertBegin(node *head , int data){
//     node *temp = new node(data);
//     temp -> next = head;
//     if(head != NULL)
//     head -> prev = temp;
//     return temp;
// }

//Insert at  End Of DLL 
// node *insertEnd( node *head , int data){
//     node *temp = new node(data);
//     if(head == NULL)
//     return temp;
//     node *curr = head;
//     while (curr -> next != NULL)
//     {
//         curr=curr->next;
//     }
//     curr->next = temp;
//     temp->prev = curr;
//     return head; 
// }
// int main(){
//     node *head=NULL;
//     head=insertEnd(head , 10);
//     head=insertEnd(head , 20);
//     return 0;
// }

//Reverse a Doubly Linked list
// node *reverseDll(node *head){
//     if(head == NULL || head -> next == NULL)return head;
//     node *prev = NULL; curr = head;
//     while(curr != NULL){
//         prev = curr -> prev;
//         curr ->prev = curr->next;
//         curr->next = prev;
//         curr = curr -> prev;
//     }
//     return prev->prev;
// }

//Delete head of Doubly linked list
//time complexity is theta(1)
// node *delhead(node *head){
//     if(head==NULL)
//     return NULL;
//     if(head -> next == NULL){
//         delete head;
//         return NULL;
//     }else{
//         node *temp = head;
//         head = head -> next;
//         head -> prev = NULL;
//         delete temp;
//         return head;
//     }
// }

// Delete Last Node of Doubly Linked List
node *delhead(node *head){
    if(head == NULL ) return NULL;
    if(head -> next == NULL){
        delete head ;
        return NULL;
    }
    else{
        node *temp =head;
        head = head -> next;
        head -> prev =NULL;
        delete temp;
        return head;
    }
}


















//circular Linked list
//Note :- strucure is same as singley linked list node of last element is connected with head of first element it is not null

// struct node{
//     int data;
//     node *next;
//     node(int x){
//         data=d;
//         next=NULL;
//     }
// }
// int main(){
//     node *head = new node(10);
//     head ->next = new node(5);
//     head->next->next = new node(20);
//     head -> next ->next ->next = head;
//     return 0;
// }

//Advantage and Disadvantage of circular linked list
//Advantage:- we can traverse the whole list from any node
//implementation of algoriths like round robin
//we can insert at the begining and end by just maintaing one tail reference /pointer

//disadvantage :- implementation of operations become complex




