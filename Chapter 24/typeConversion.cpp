#include <iostream>
using namespace std;

int main() {

    int a = 5.5; // Decimal part truncated (implicit conversion)
    double b = a; // Implicit conversion from int to double
    cout << b << endl; // Output: 5

    int c = 5.4; // Decimal part truncated
    double d = (double)c; // Explicit conversion from int to double
    cout << d << endl; // Output: 5

    double e = 55.5; // No truncation
    int f = e; // Decimal part truncated (implicit conversion)
    cout << f << endl; // Output: 55

    double g = 55.5; // No truncation
    cout << g << endl;
    int h = (int)g; // Decimal part truncated (explicit conversion)
    cout << h << endl; // Output: 55

    return 0;
}
