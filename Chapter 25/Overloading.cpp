#include <iostream>
using namespace std;




#include <iostream>
using namespace std;
class Calculator {
public:
// Function Overloading Winthin the scope of the class
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Int Sum: " << calc.add(5, 10) << endl;
    cout << "Double Sum: " << calc.add(5.5, 10.5) << endl;
    cout << "Int Sum (3 args): " << calc.add(5, 10, 15) << endl;

    return 0;
}