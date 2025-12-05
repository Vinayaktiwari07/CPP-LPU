#include<iostream>
using namespace std;

class superParent{
    public:
    void show(){
        cout << "I am super parent." << endl;
    }
};
// we inherit virtually from parent class superparent
class parentA : virtual public superParent{
    
};
// we inherit virtually from parent class
class parentB : virtual public superParent{

};

class child: public parentA, public parentB{

};
int main() {
    child ch;
    // ch.parentA::show();
    // ch.parentB::show();
    ch.show();
    return 0;
}