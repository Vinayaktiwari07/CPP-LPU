#include<iostream>
#include<bits/stdc++.h>
// #include<vector>
// #include<map>
using namespace std;
int main() {
    // map<int,int>mp;
    unordered_map<int,int>mp;

    vector<int> brr = {1,2,3,4,3,2,1,2,3,4,5,4,3,4,3};

    for(int i=0; i<brr.size(); i++){
        mp[brr[i]]++;;
    }

    int max_element = 0;
    int max_freq = 0;

    for(auto &x:mp){
        int key = x.first;
        int data = x.second;

        if(data > max_freq){
            max_freq = data;
            max_element = key;
        }
    }

    cout << max_element << ":" << max_freq<< endl;


    return 0;
}