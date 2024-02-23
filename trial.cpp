#include <iostream>

using namespace std;

int a = 2;
int b = 3;
int c = 4;
int main(){

int *ptr = &a;

cout<<*ptr<<endl;

ptr = &b;
cout<<*ptr<<endl;

ptr = &c;
cout<<*ptr<<endl;

  return 0;
}