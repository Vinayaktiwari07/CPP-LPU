#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[4][4]={{3,1,5,6}, {4,2,1,3}, {5,1,3,7}, {9,8,1,8}};

    vector<int> brr;
    for(int i=0; i<4; i++){
        int max = INT8_MIN;
        for(int j=0; j<4; j++){
            if(arr[j][i] > max){
                max = arr[j][i];
            }
        }
        brr.push_back(max);
    }

    for(int i=0; i<brr.size(); i++){
        cout << brr[i] <<" ";
    }
    return 0;
}