#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s = "kadak";
    int n = s.size();
    vector<int> arr;
    
    int count1 = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i; j<n; j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        arr.push_back(count);
        count1++;
        
    }
     for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
     }
    return 0;
}