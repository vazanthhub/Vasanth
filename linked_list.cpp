/* linked list is used to group(link) of separated spaces in the memory by using 
it addresses (pointer variable).
it has a dynamic size of variable whereas array is the fixed size 
we use pointer variable to create an object as node because its dynamic 
memory allocation of memory in nature

1. create a node as a pointer variale(declaring)) bcz it allocates dynamic memory
user defined object, and play with it 
2. internal parts has value and pointer (which linked to another variable)








*/

#include <iostream>

using namespace std;


/* In decleration,create an user defined data type 'Node' which has two parts such as 
value and pointer, which holds the address of the Next node. Nodes are defined as a pointer variable 
so that it allocates a new space from the memory.

1. we can insert nodes at Front, end and after the any nodes

Remember pointer variable holds the address of the any types of variables

*/


class nodes{
public:
    int value;
    nodes * next;
};



void Insert_front(nodes**head, int newvalue){


//step_1 = creat a new node
nodes*new_node = new nodes();
new_node->value = newvalue;

//step_2 = position a new node in front of head node; by linking to the address of the head node;
new_node->next = *head;


//step_3 = make this new node as a head node; address of the head variable =new node(pointer variale)
*head = new_node;


}


void Insert_end(nodes**head, int newvalue){   /// *head is the address of the pointer variable

// create a new node
    nodes*new_node = new nodes();
    new_node->value = newvalue;
    new_node->next = nullptr;



// find out the last node
    nodes*last_node = *head;
    

    while(last_node->next != nullptr){

    last_node = last_node->next;

    }
// position new node next to the last node
    last_node->next = new_node;



}



void Insert_previous(nodes*previous, int new_value)
{
  // creating new node

  nodes* new_node = new nodes();
  new_node->value = new_value;

  //while inserting this, save the next node address to the new node, then previous node to 
  // the new node

  new_node->next = previous->next;
  previous->next = new_node;



}





 void display(nodes*first) {
    
    while(first != nullptr)
    {

     cout<<first->value<<endl;
     first = first->next;
    }

 }


 




int main(){


 nodes *head = new nodes();   // it is a constructor and
 nodes *second = new nodes(); // new is the keyword for the address of a new space 
 nodes *third = new nodes();  // to the Pointer variable.
 
 head->value = 1;
 head->next = second;

 second->value = 2;
 second->next = third;
 
 third->value = 3; 
 third->next = nullptr;


   
Insert_front(&head, 0);
Insert_previous(third, 4);
Insert_end(&head, 5);





   display(head);


    return 0;
}