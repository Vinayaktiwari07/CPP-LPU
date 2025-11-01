#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[4][3] = {{1,1,2},{3,1,2},{2,3,4},{4,10,10}};
    

    
    int max = 100;
    int freq[max]={0};
    
    for(int i=0; i<4; i++){
       for(int j=0; j<3; j++){
           freq[arr[i][j]]++;
       }
    }

    cout << "Frequency of element are: " << endl;

    for(int i=0; i< max; i++){
        cout << i << ":" <<  freq[i] << " ";
    }



    
    return 0;
}