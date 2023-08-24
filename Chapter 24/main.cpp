#include <iostream>
using namespace std;

//Copy Constructor

class Car
{
public:
    string name;
    int model;
public:
    Car(){cout << "Default Constructor"<< endl;}
    Car(string n, int m) : name(n), model(m){};
    Car(Car &obj1){
        this->name = obj1.name;
        this->model = obj1.model;
    };
   void printDetails(){
        cout << this->name << endl;
        cout << this->model << endl;
   }
};


int main() {
    // Car car1;
    // car1.name = "Budgiee";
    // car1.model = 2002;
    // car1.printDetails();
    // Car car2 = car1;
    // car2.printDetails();

    // car1.name = "Ibsham";
    // car1.printDetails();
    // car2.printDetails();


    Car car3ref;
    car3ref.name = "Aisham";
    car3ref.model = 1950;
    car3ref.printDetails();

    Car car4(car3ref);
    car4.printDetails();
    car3ref.name = "Inaayat";
    
    cout << "After Reassigning" << endl;
    car3ref.printDetails();
    car4.printDetails();




    return 0;
}
