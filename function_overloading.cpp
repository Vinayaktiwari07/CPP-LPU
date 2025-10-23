// Adding numbers


#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}


int add(int x, int y, int z){
    return x+y+z;
}
int main() {
    int value1 = add(2,3);
    int value2 = add(2,3,4);

    cout << value1 << endl;
    cout << value2 << endl;
    return 0;
}