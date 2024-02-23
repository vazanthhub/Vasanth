#include<iostream>

using namespace std;


struct car {
 int no;
 string name;




};


 

int main(){

 struct car My_car;
 My_car.no = 123;
 My_car.name= "audi";

cout<< My_car.no <<endl;
cout<< My_car.name <<endl;


    return 0;
}