#include<iostream>
using namespace std;

int main() {
    int a = 12;
    int* ptr = &a;
    delete(a);
    cout << *ptr<<endl;

    if(ptr != nullptr){
        cout << *ptr;
    }

    return 0;
}