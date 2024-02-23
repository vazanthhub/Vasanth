#include<iostream>
#include<string>



struct Mobile{

    std::string Model;
    std::string Manufacturer;



};

struct person{

    std::string Name;
    int age;
    std::string gender;
    Mobile mobile;
};

void printminfo(Mobile M1){
    std::cout<<std::endl;
    std::cout<<"Model:"<<M1.Model<<std::endl;;
    std::cout<<"Manufacturer:"<<M1.Manufacturer<<std::endl;
    std::cout<<std::endl;
 }



 void printpinfo(person P1){
    std::cout<<std::endl;
    std::cout<<"Name:"<<P1.Name<<std::endl;
    std::cout<<"Age:"<<P1.age<<std::endl;
    std::cout<<"Gender:"<<P1.gender<<std::endl;
    printminfo(P1.mobile);
    std::cout<<std::endl;

 }



int main(){

  Mobile m1;
  m1.Model = "iphone SE";
  m1.Manufacturer = "Apple";

  Mobile m2;
  m2.Model = "galaxy";
  m2.Manufacturer = "samsung";

  
  person p1;
  p1.Name = "vasanth";
  p1.age = 28;
  p1.gender = "Male";
  p1.mobile = m2;
  
  printpinfo(p1);
  


    return 0;
}