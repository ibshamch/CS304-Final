#include <iostream>
using namespace std;

class Daddy{
    
    public:
    string name;
    Daddy(){
        this->name = "Ibsham";
    }
    void daddyDetails(){
        cout << "Daddy name is Ibsham"<< endl;
    }
};

class ChildSon : public Daddy {
    public:
    string Sonname;

    ChildSon(){
        Sonname = "Future son!";
    }
      void daddyDetails(){
        cout << name << " is daddy of  " << Sonname << endl;
    }
};

class ChildDaughter : public Daddy {
    public:
    string Daughtername;

    ChildDaughter(){
        Daughtername = "Future Daughter!";
    }
      void daddyDetails(){
        cout << name << " is daddy of  " << Daughtername << endl;
    }
};

int main(){
    Daddy daddy1;
    daddy1.daddyDetails();

  
    ChildSon son1;
    son1.daddyDetails();



    ChildDaughter daughter1;
    daughter1.daddyDetails();
    cout<<" Calling using scope resolution operator " << endl;
    daughter1.Daddy::daddyDetails();  // Explicit calling using scope resolution operator
}



