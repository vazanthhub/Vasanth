                          /* Tree is a Hiearchial data structure, 
                          Feature	     Struct	               Class	
                        Data type	    Value type	       Reference type	
                     Memory allocation	  Stack	              Heap	
                  Default access control	Public	          Private	
                         Purpose	   Simple data structures	Complex objects	
			 */
# include<iostream>
using namespace std;

/* declare Nodes as struct(user defined data type) 
it's like a class, but the object were created or
defined by using a function or . operator, instead of constructor or . operator

main function only calling the function for the creation of New nodes(dynamic);

Node has internal function of Node itself 
*/

struct Node {

 int value;
 Node *left;
 Node *right;

};

/* create a basic nodes it consists of 
   data, left and right Pointer variable -> nullptr(initally)]

*/

Node* create_Node(int value){
   Node*Nodes = new Node();
   Nodes->value = value;
   Nodes->left = nullptr;
   Nodes->right = nullptr;
   return Nodes;

}


/* Preorder: (Data(print), left , right ) 
   1. make the compiler meets the node (one time visit) then (print)
   2. Left, Right (recursive function until meets base state of Nullptr and delete itself
    from the memory)
   ************** ptr*variable -> null ptr *****************
                Delete the node from the memory
    
   3. Remeber, if left *ptr and right *ptr -> Null, then root*node will automatically delete from RAM;  */

 void preorder(Node*root_Node){

 if (root_Node == nullptr)  // base case
 return;

 cout<<root_Node->value<<' ';
 preorder(root_Node->left);
 preorder(root_Node->right);


}


/* Inorder (L, D, R) Make the compiler meets data after the visit of left nodes (twice),
that means two time visit of node to print. 
print data ´, when it visit second time from the left side.


*/
 void inorder(Node*root_Node){

 if (root_Node == nullptr)  // base case
 return;

 
 preorder(root_Node->left);
 cout<<root_Node->value<<' ';
 preorder(root_Node->right);

 }

  /* Postorder(L, R, D)  
    arrange the compiler to meet the node  (thrice), first visit(from root),
                                                     second visit(from left), 
                                                     third vist (from right), then 
                                                     delete the node. 
  
       */
 
  void postorder(Node*root_Node){

  if (root_Node == nullptr)  // base case
  return;

 
  postorder(root_Node->left);
  postorder(root_Node->right);
  cout<<root_Node->value<<' ';
  

  }


int main(){

 // create a new space for the node, definition
 /*  define node as Pointer variable -> func(dynamic memory space by new); as 
 struct is used in tree data structure bcz it easily delete the unused function and efficient for
 smaller trees.
  */                                                                                  
 //level-1 
 Node*root_Node = create_Node(1);

//level-2 
 root_Node->left = create_Node(2);
 root_Node->right = create_Node(3);

 // level-3
 root_Node->left->left = create_Node(4);
 root_Node->left->right = create_Node(5);

 root_Node->right->left = create_Node(6);
 root_Node->right->right = create_Node(7);

 
// level-4 
 root_Node->left->right->left = create_Node(9);
 root_Node->right->right->left = create_Node(15);

  cout<<"\n";
  cout<<"Pre order: ";
  preorder(root_Node);
  cout<<"\n";
  cout<<"\n";

  cout<<"In order: ";
  inorder(root_Node);
  cout<<"\n";
  cout<<"\n";

  cout<<"Post order: ";
  postorder(root_Node);
  cout<<"\n";
  cout<<"\n";
  
    return 0;
}


