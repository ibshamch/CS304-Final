/* Definations

1. **Stream Insertion Operator (<<)**: This operator is used to put data on the output stream. The default output stream is the console, but it can also be a file or network socket. The operator has been overloaded in the ostream class to handle different data types.

2. **Stream Extraction Operator (>>)**: This operator is used to get data from the input stream. The default input stream is from the console. The operator has been overloaded in the istream class to handle different data types.

3. **Overloading Stream Insertion Operator**: The stream insertion operator can be overloaded for user-defined data types. If not overloaded, using them with user-defined types will result in a compiler error.

4. **Overloading Stream Extraction Operator**: Similar to the insertion operator, the extraction operator can also be overloaded for user-defined data types.

5. **Overloading Equality Operator**: The equality operator can be overloaded for user-defined data types. This allows objects of these types to be compared using the '==' operator.

6. **Overloading Inequality Operator**: The inequality operator can be overloaded for user-defined data types. This allows objects of these types to be compared using the '!=' operator.

7. **Associativity of Operators**: The insertion and extraction operators are left-to-right associative, which means that in an expression with multiple operators of the same precedence, the leftmost operation is performed first.

8. **Friend Functions**: These are functions that are not members of a class but have access to the class's private and protected members. Overloaded operators are often implemented as friend functions if they need to access private or protected class data.

9. **Ostream & Istream**: These are classes in C++ that represent output streams and input streams respectively. They provide several member functions and overloaded operators for writing and reading data.


 */ 


#include <iostream>
using namespace std;

class MyClass {
private:
    string name;
    int age;
    string favLang;

public:
    // Extraction Operator Overloading (Input Extracted from user)
    friend istream& operator>>(istream& input, MyClass& obj) {
        cout << "What are the details: Name, Age, Favourite Language? " << endl;
        input >> obj.name;
        input >> obj.age;
        input >> obj.favLang;
        
        return input;
    }

    // Insertion Operator Overloading (Output inserted into console)
    friend ostream& operator<<(ostream& output, const MyClass& obj) {   
        output << "Details are: " << endl;
        output << "Name is: " << obj.name << endl;
        output << "Age is: " << obj.age << endl;
        output << "Favourite Language is: " << obj.favLang << endl;

        return output;
    }


    
};

int main() {
    MyClass obj;
    cin >> obj;
    cout << obj;
    
    return 0;
}


