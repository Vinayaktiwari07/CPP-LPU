#include<iostream>
using namespace std;
int main() {
    int a = 7; 
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    a = a+10;
    cout << b << endl;

    b = b+10;
    cout << a << endl;
    return 0;
}