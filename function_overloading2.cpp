// multiplication overloading


#include<iostream>
using namespace std;

int multiplication(int x, int y){
    return x*y;
}


int multiplication(int x, int y, int z){
    return x*y*z;
}
int main() {
    int value1 = multiplication(2,3);
    int value2 = multiplication(2,3,4);

    cout << value1 << endl;
    cout << value2 << endl;
    return 0;
}