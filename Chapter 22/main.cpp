#include <iostream>
using namespace std;

//Base
class Parent 
{
    string name;
public:
    Parent(){ cout << "Parent Constructor is called" << endl;};
    Parent(string n){this->name = n;
        cout << "Parameterized Parent" << endl;
    }
    void printDetails(){
        cout << "Name is : "<< this->name << endl;
    }
    void printDetails2(){
        cout << "Name is : "<< this->name << " and age is 21." << endl;
    }
    
};
//Child
class Child : public Parent {
    public:
    Child() : Parent() {
        cout << "Child is Called" << endl;
    }
    Child(string n) : Parent(n) {
        // Parent class's constructor is called with the provided name
        cout << "Parameterized Child" << endl;
    }


};

int main(){
// Default k andr parenthesis ni lagana
Child obj1;
Child obj2("Ibsham");
obj2.printDetails();
obj2.printDetails2();




};