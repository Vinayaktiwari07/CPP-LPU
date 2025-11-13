#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,2,2,3,3,4,2,5};
    int n = arr.size();

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }

    for(auto& x : mp){
        int key = x.first;
        int value = x.second;
        
        cout << key<< " Occured at " << value << " th index "<<endl;
        
    }
    return 0;
}