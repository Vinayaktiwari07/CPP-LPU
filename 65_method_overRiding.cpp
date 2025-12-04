#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout << "Hello guys!" << endl;
    }
};

class dog: public Animal{
    public:
    void speak(){
        cout <<"Bark" << endl;
    }
};
int main() {

    dog d;
    d.speak(); // method overridding

    cout << endl;

    // Animal a;
    // a.speak(); // no method overridding
    return 0;
}