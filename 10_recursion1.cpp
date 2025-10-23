#include<iostream>
using namespace std;


void printRevNum(int num, int n){
    if(num == 0){
        return ;
    }

    cout << num << " ";
    num--;
    printRevNum(num, n);
}
int main() {
    int num = 5;
    int n = 5;
    printRevNum(num, n);
    return 0;
}