#include <iostream>
using namespace std;

//Base
class Parent 
{
    string name;
    int age;
public:
    Parent(){
        cout << "DC Parent" << endl;
     
 }
    Parent(string n){this->name = n;
        cout << "Parameterized Parent" << endl;
    }
       Parent(string n,int age){
        cout << "Parameterized 2nd Child" << endl;
    }
    ~Parent(){
        cout<< "P Destructor" << endl; 
    }

    
};
//Child
class Child : public Parent {
    public:
    Child(){cout << "DC Child" << endl;}
    // Base class initiazer 
    Child(string n) : Parent(n){
        cout << "Parameterized Child" << endl;
    }
      Child(string n,int age) : Parent(n,age){
        cout << "Parameterized 2nd Child" << endl;
    }

    ~Child(){
        cout<< "C Destructor" << endl; 
    }
};

int main(){
// Default k andr parenthesis ni lagana
Child obj;
// Child obj1("Ibsham",21);
};