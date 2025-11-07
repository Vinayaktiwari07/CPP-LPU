#include<iostream>
using namespace std;

int main() {
    int arr[4][4]={{1,2,4,8}, {9,10,11,12}, {15,17,19,21}, {28,31,40,50}};

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(int);

    int target = 17;
    bool flag = false;
    int srow = 0, ecol = col-1;

    while(srow < row && ecol > 0){
        if(arr[srow][ecol] == target){
            flag = true;
            break;
        }
        else if(arr[srow][ecol] > target){
            ecol--;
        }
        else{
            srow++;
        }
    }

    if(flag)
    cout << "found"<< endl;
    else
    cout << "not found" << endl;

    
    


    return 0;
}