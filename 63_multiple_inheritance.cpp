#include<iostream>
using namespace std;

class parentClass1{
    public:
    parentClass1(){
        cout << "Parent class 1 constructor called" << endl;
    }
    ~parentClass1(){
        cout << "Parent class 1 destructor called" << endl;
    }
};
class parentClass2{
    public:
    parentClass2(){
        cout << "Parent class 2 constructor called" << endl;
    }
    ~parentClass2(){
        cout << "Parent class 2 destructor called" << endl;
    }
};

class childClass: public parentClass1, public parentClass2{
    public:
    childClass(){
        cout << "Child class constructor called" << endl;
    }
    ~childClass(){
        cout << "Child class destructor called" << endl;
    }
};
int main() {
    childClass ch;
    
    return 0;
}