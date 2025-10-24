#include<iostream>
using namespace std;
int main() {
    int a = 10;

    int* ptr = &a;

    int ** q = &ptr;

    cout << "The value of a is : " << a << endl;
    cout << "The address of a is : " << &a << endl;
    cout << "The address of a is : " << ptr << endl;
    cout << "The value of a is : " << *ptr << endl;
    
    cout << "The address of ptr is : " << q << endl;
    cout << "The value at address at ptr is : " << **q << endl;

    return 0;
}