// printing array by using pointer

#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};

    int* p = arr;

    for(int i=0; i<5; i++){
        cout << *p << endl;
        p++;

        // alternative
        cout << *(p+i) << endl;
        p++;
    }
    return 0;
}