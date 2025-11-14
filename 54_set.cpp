#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,2,3,4,2,1,2,3,2,4,3,2};
    
    unordered_set<int> st;

    for(auto& x : arr){
        st.insert(x);
    }
    
    // st.insert(10);
    // st.insert(20);
    // st.insert(10);
    
    if(st.find(2) != st.end()){
        cout <<"present" << endl;
    }
    else{
        cout << "absent" << endl;
    }
    
    for(auto& x : arr){
        cout << x << " ";
    }

    cout << endl;
    
    st.erase(1);
    
    cout << st.size() << endl;
    cout << st.empty() << endl;


    return 0;
}