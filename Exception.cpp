#include<iostream>

int main()
{
   int a = 3;
   int &ref = a;
   int *ptr = nullptr;
   ptr = &ref;
   std::cout<< std::endl;

   //std::cout<<*ptr<<std::endl;
   std::cout<<ref<<std::endl;
   std::cout<<a<<std::endl;
   ref = 4.5;
   std::cout<<ref<<std::endl;
   std::cout<<a<<std::endl;
   std::cout<< std::endl;
  return 0;
}