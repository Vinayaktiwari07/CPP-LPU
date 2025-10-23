#include<iostream>
using namespace std;

void printNum(int arr[],int idx){
    if(idx  >= 5){
        return;
    }
    cout << arr[idx] << " ";
    printNum(arr, idx+1);
}
int main() {
    int idx = 0;
    int arr[5]={1,2,3,4,5};

    printNum(arr, 0);
    return 0;
}