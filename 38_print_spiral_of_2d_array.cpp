#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[4][4]={{3,1,5,6}, {4,2,1,3}, {5,1,3,7}, {9,8,1,8}};

    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        for(int i=1;i<4;i++){
            int k=3;
            cout << arr[i][k]<<" ";
        }
        for(int j=2, i=3; j>=0; j--){
            cout << arr[i][j] << " ";
        }
        for(int i=2, j=0; i>0; i--){
            cout << arr[i][j] << " ";
        }
        break;
        
    }







    
    return 0;
}