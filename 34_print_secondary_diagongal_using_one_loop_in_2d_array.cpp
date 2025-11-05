#include<iostream>
using namespace std;
int main() {
    int arr[4][4]={{3,1,5,6}, {4,2,1,3}, {5,1,3,7}, {9,8,1,8}};

    for(int i=0, j=3; i<4 ;j--, i++){
        if(i+j == 3){
            cout << arr[i][j] << " ";
        }
        
    }
    return 0;
}