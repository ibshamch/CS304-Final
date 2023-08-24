#include <iostream>

class GrandParent {
public:
    void print() {
        std::cout << "This is the grandparent class." << std::endl;
    }
};

class Parent1 : public GrandParent {
public:
    void print() {
        std::cout << "This is the parent class." << std::endl;
    }
};

class Child1 : public Parent1 {
public:
    void print() {
        GrandParent::print();
        std::cout << "This is the child class." << std::endl;
    }
};

int main() {
    Child1 c;
    c.GrandParent::print();  // This will call the print method of the Child1 class
    c.print();
    return 0;
};