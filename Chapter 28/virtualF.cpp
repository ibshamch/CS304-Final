#include <iostream>
using namespace std;

class A{
    public:
     virtual void print(){
        cout << "Helo A" << endl;
    }
};
class B : public A{
    public:
    void print(){
        cout << "Helo B" << endl;
    }
};
class C : public B{
    public:
    void print(){
        cout << "Helo C" << endl;
    }
};

int main(){

    A *a;
    a = new B;
    a->print();
    a = new C;
    a->print();

   

};