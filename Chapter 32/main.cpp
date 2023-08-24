#include<iostream>
using namespace std;


// Templates

template <typename T, typename U>
void print (T value, U value2){
    cout << value << " " <<value2 << endl;
};

// Template return types
template <typename T, typename U>
T add(T value, U value2){
    return value + value2;
};

int main() {
    print(44,"Hi, I am a string");
    print(40,"e");
    print(3.4,"t");

    cout << add(5,7) << endl;

    double a = add(3.44,4.6);
    cout << a << endl;

    return 0;
}
