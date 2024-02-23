
/*  double linked list 
     creation of Node (dynamic data type- pointer variable)
     Node consist of three parts (value, Next pointer, Previous pointer )
     use head and tail, which are the special node, (copied the nodes), only the reference and use 
     pointers alone head and tail are useful for the traversal on the linked list.
     we should takes care of pointers, head and tail nodes for every successive creation of 
     nodes. so declaration of nodes once is enough.

     always complete the coding of linked list, so that it chained continuously.

            */



#include <iostream>

using namespace std;

class Node{  // definition of the nodes; Blue print of the nodes
public:
   int value;
   Node* next;
   Node* previous;


};
    
    void print_forward(Node *head){

     while(head->next != nullptr) {

     cout<<head->value<<endl;
     head = head->next;

       }

    }

    
    void print_backward(Node*tail) {

    while(tail->previous != nullptr) {

     cout<<tail->value<<endl;
     tail = tail->previous;

       }

    }



 int main() {

 // declaration of nodes -> declare it as pointer variable, because its dynamic in nature
 // allocates memory space by using 'new' before the constructor;
 Node*head;
 Node*tail;


// First node
 Node*node = new Node();

 node->value = 1;
 node->next = nullptr;
 node->previous = nullptr;
 head = node;
 tail = node;

// second node
 node = new Node();

 node->value = 2;
 node->next = nullptr;
 node->previous = tail;

 tail->next = node;

 tail = node;

// Third node
 node = new Node();

 node->value = 3;
 node->next = nullptr;
 node->previous = tail;

 tail->next = node;

 tail = node;

 // fourth node
 node = new Node();

 node->value = 4;
 node->next = nullptr;
 node->previous = tail;

 tail->next = node;

 tail = node;


// fifth node
 node = new Node();

 node->value = 5;
 node->next = nullptr;
 node->previous = tail;

 tail->next = node;

 tail = node;


  print_forward(head); 
  cout<<endl;
  print_backward(tail);

    return 0;
 }




