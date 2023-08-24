#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int a;
public:
    int b;

//Ye apni class se bahir ni ja sakta
private:
    int c;

public:
    Base() : a(10), b(20), c(30) {}
};

// Derived class
class Derived : private Base {
public:
    void display() {
        cout << "Value of a in derived class: " << a << " " << b <<  " " << endl;
    }
};

int main() {
    Derived d;
    d.display();  // This will print "Value of a in derived class: 10"
    return 0;
}
