#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

public:
    Base(int a) : privateVar(a) {}

    int getPrivateVar() {
        return privateVar;
    }
};

class Derived : private Base {
    // private:
    //  Base(int a) : privateVar(a) {}

    // int getPrivateVar() {
    //     return privateVar;
    // }
public:
    Derived(int a) : Base(a) {}

    void accessBase() {
        std::cout << "Accessing base class private variable: " << getPrivateVar() << std::endl;
    }
};

int main() {
    Derived d(10);
    d.accessBase();  // Outputs: "Accessing base class private variable: 10"
    return 0;
}
