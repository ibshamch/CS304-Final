#include <iostream>
using namespace std;

class A{
    public:
    virtual void print(){
        cout << "Ibsham" << endl;
    }
};

class B : public A{
    public:
    void print(){
        cout << "Aisham" << endl;
    }
};

int main(){

A *ptr;
B obj;
ptr = &obj;  // ptr k andr B class ka address save krwa rhe
ptr->print();
return 0;


}