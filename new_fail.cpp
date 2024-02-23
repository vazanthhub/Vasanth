#include<iostream>

int main()
{
  std::cout<<std::endl;//start coding

  int *ptr_1 = nullptr;  // initalize the pointer first
  ptr_1 = new int[10000000000];
   
  
  std::cout<<ptr_1<<std::endl;
  
  
  delete ptr_1;
  ptr_1 = nullptr;
  
  //std::cout<<ptr_1<<std::endl;
  
  

  std::cout<<"Program end successfully"<<std::endl;
  std::cout<<std::endl; //end coding

  return 0;
}
