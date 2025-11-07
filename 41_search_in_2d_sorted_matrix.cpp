#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[4][4]={{1,2,4,8}, {9,10,11,12}, {15,17,19,21}, {28,31,40,50}};

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(int);

    int total = row*col;

    
    int target = 19;
    bool found = false;
    for(int i=0; i<row; i++){
        int srow = 0;
        int scol = 0;
        int erow = row-1;
        int ecol = col-1;
       
        while(scol<=ecol){
            int mid = (scol + ecol)/2;
            if(target == arr[i][mid]){
                cout << "found" << endl;
                found = true;
                break;

            }
            else if(target >= arr[i][mid]){
                scol = mid+1;
            }
            else{
                ecol = mid-1;
            }
        }
        // if(found)
        // break;
        
        }
        if(!found) {
        cout << "Not found" << endl;
    }
    // cout << "hey";

    


    return 0;
}