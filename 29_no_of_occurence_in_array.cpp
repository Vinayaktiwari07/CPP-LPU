#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,1,2,3,1,2,2,3,4,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    int max = 10000;
    int freq[max]={0};
    
    for(int i=0; i<n; i++){
       // cout<<"hey";
        freq[arr[i]]++;
    }

    cout << "Frequency of element are: " << endl;

    for(int i=0; i< n; i++){
        cout << i << ":" <<  freq[i] << " ";
    }



    
    return 0;
}