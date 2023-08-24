#include <iostream>
using namespace std;

class A{
    public:
    void print(){
        cout << "I am A" << endl;    }
};


class B{
    public:
    void print(){
        cout << "I am B" << endl;    }
};



class C : public A, public B
{
    public:
    void print(){
        A::print();
            }
};

int main(){

    C obj;
    obj.B::print();
    C obj2;
    obj2.print();

}