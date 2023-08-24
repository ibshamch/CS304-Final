#include <iostream>
using namespace std;

template <typename T>
class A {
    T data;
    public:
    void setData(T d)
    {
        this->data = d;
    };

    T getData(){
        return this->data;
    }
};


int main(){

    A <int>obj;
    obj.setData(4);
    obj.getData();


}