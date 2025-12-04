#include<iostream>
using namespace std;

class parentClass{
    public:
    parentClass(){
        cout << "Parent class constructor called" << endl;
    }
    ~parentClass(){
        cout << "Parent class destructor called" << endl;
    }
};

class childClass: public parentClass{
    public:
    childClass(){
        cout << "Child class constructor called" << endl;
    }
    ~childClass(){
        cout << "Child class destructor called" << endl;
    }
};
class grandchildClass: public childClass{
    public:
    grandchildClass(){
        cout << "grandChild class constructor called" << endl;
    }
    ~grandchildClass(){
        cout << "grandChild class destructor called" << endl;
    }
};

int main() {
    grandchildClass ch;
    
    return 0;
}