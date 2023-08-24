#include <iostream>
using namespace std;

template <typename T, typename U>
void print(T a , U b){
    cout << a + b << endl;
}

void print(int a,int b){
    cout << a + b << endl;
}
void print(int a,int b,int c){
    cout << a + b + c << endl;
}




int main(){

print(1,2);
print(1,7,3);
print(1,33.4);

}