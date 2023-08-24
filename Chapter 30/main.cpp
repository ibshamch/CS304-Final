#include<iostream>
using namespace std;

// Base class
class Shape {
protected:
    int width;
    int height;
public:
    // pure virtual function providing interface framework.
    virtual double getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

};

// Derived classes
class Rectangle: public Shape {
public:
    double getArea() { 
        return (width * height); 
    }
};

class Triangle: public Shape {
public:
    double getArea() { 
        return (width * height)/2; 
    }
};

int main() {
   Rectangle Rect;
   Triangle  Tri;

   Rect.setWidth(5);
   Rect.setHeight(7);
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
   // Print the area of the object.
   cout << "Total Triangle area: " << (Tri.getArea()) << endl; 

   return 0;
};

// In this example, `Shape` is a base class with a pure virtual function `getArea()`. `Rectangle` and `Triangle` are derived classes that implement the `getArea()` function. When we call `getArea()`, the correct function is called based on the type of object, demonstrating polymorphism. The `Rectangle`'s `getArea()` returns the area of a rectangle, while the `Triangle`'s `getArea()` returns the area of a triangle. This is a simple example of how polymorphism can be implemented in C++ using virtual functions.