

#include <iostream>
using namespace std;
// its  a blueprint 1 To create a container
// first decide its type by Class

class employee{        
    public:
        string name;
        string name_of_cpy;
        int age;
        int* rate;
        int ratenum;

     employee(){}



    employee(string My_name,string cpyname, int my_age) {
       name = My_name;
       name_of_cpy = cpyname;
       age = my_age;
       ratenum = 2;
       rate = new int[ratenum];
       rate[0] = 1;
       rate[1] = 1;

    }

// destructor to clean up the memory and same as constructor but without parameter argument
    ~employee(){
     delete[]rate;
     rate = nullptr;

    }

    void display()
    {
        cout<<"Name:"<< name <<endl;
        cout<<"Name of company:"<< name_of_cpy <<endl;
        cout<<"age:"<< age <<endl;
    }

};

int main() {

employee emp_1 = employee("vasanth","schiller",23);
cout<<endl;
emp_1.display();
cout<<"\n";

employee emp_2("kumar","schiller India",25);
emp_2.display();
cout<<endl;

employee emp_3;
emp_3.name = "Rengith";
emp_3.age = 27;
emp_3.name_of_cpy ="Zeich";
emp_3.display();
cout<<endl;

    return 0;
}

/* stories of class 'special data strucure for creation of 
user defined data types'---model---struct---Blueprint
Inside the class,  1. decleration of data: attributes.
                   2. decleration of function: method.
Outside the class,
In memory, it allocates a space, when the object is created ,and it invokes the default
constructor whenever new object has been created and assigns the initial values by itself to the 
class variables.

Default constructor is a special method which has been buit by own using
a predefined attributes and method of the class.

we can change the default constructor by creating a new param.constructor .

constructor.
     once the new one has created inside the class, the default has been destroyed.
     param. constructor: special method of class, new definition for the predefined attributes
     are passed through the constructor as attributes, then the predefined attributes
     will be redefined by asssigning the parameterised value to the variables of class  ;
                   <condition> bcz of special
                  1. same name as class 
                  2. doesn't return anything
                  3. Invokes everytime whenever
                     object is created

    Class : declaration: Inside the class.(Intro the variables) 
            Object creation
          : Definition: outside the class by
            1. objects . opeator (default constructor), invokes by default const. by own or 
               by creating a default constructor, when it was destroyed by param constr.
               it doesn't have any arguments.
            2. user defined constructor by arguments passing (param constructor).
            
            

*/