#include <iostream>
using namespace std;


// Base class
class Animal {
public:
     virtual void makeSound() {
        std::cout << "The animal makes a sound." << std::endl;
    }
};

// Derived class (specialization of Animal)
class Dog : public Animal {
public:
    // Override the makeSound method of the Animal class
    void makeSound()  {
        std::cout << "The dog barks." << std::endl;
    }
};

int main() {
    Animal *a;
    Dog b;
    a = &b;
    a->makeSound();
    Dog myDog;
    myDog.makeSound();  // Outputs: "The dog barks."
    return 0;
}
