#include <iostream>
using namespace std;

class A{   //Abstract Class
    public:
    // Pure Virtual Function
    virtual void draw() = 0;
    // Virtual 
    virtual void draw2() {
        cout << "Shape Class" << endl;
    }

};
// Concrete Class (Pure function is given instruction in such class)
class B : public A{
public:
    // Function Overriding
    virtual  void draw(){
        cout << "Line Class" << endl;
    }
     void draw2(){
        cout << "Line Class Draw" << endl;
    }
}; 

int main() {
    A *a;
    a = new B;
    a->draw();
    a ->draw2();
}