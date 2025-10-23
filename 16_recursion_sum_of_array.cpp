#include<iostream>
using namespace std;

int sumNum(int arr[],int idx){
    int sum = 0;
    if(idx  >= 5){
        return;
    }
    // cout << arr[idx] << " ";
    sum = sum + arr[idx];
    sumNum(arr, idx+1);
    return sum;
}
int main() {
    int idx = 0;
    int arr[5]={1,2,3,4,5};

    sumNum(arr, 0);
    return 0;
}