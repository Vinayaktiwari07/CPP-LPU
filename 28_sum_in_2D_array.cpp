#include<iostream>
using namespace std;
int main() {
    int n=3;

    int arr[n][n+1];

    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << sum << endl;


    
    return 0;
}