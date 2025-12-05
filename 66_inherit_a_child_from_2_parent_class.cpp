#include<iostream>
using namespace std;

class parentClassA{
    public:
    void show(){
        cout << "Hii guys !!" << endl;
    }
};
class parentClassB{
    public:
    void show(){
        cout << "Good morning guys !!" << endl;
    }
};

class child: public parentClassA, public parentClassB{

};
int main() {
    child ch;
    ch.parentClassA::show();
    ch.parentClassB::show();
    return 0;
}