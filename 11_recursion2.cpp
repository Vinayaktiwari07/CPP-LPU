#include<iostream>
using namespace std;


void printRevNum(int n){
    if(n < -3){
        return ;
    }

    cout << n+4 << " ";

    printRevNum(n-1);
}
int main() {
    int n = 1;
    printRevNum(n);
    return 0;
}