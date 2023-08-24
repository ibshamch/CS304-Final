#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int val) : value(val) {}

    void printValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2 = num1;  // Copy constructor

    cout << "Before Change:" << endl;
    num1.printValue();
    num2.printValue();

    // Changing the value of num1
    num1.value = 10;

    cout << "After Change:" << endl;
    num1.printValue();
    num2.printValue();  // Changes are reflected in num2

    return 0;
}
