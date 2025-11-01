#include<iostream>
using namespace std;
int main() {
    string s = "kanak";
    int n = s.size();

    bool flag = true;
    for(int i=0,j=n-1 ;i<n-1, j>0;j-- & i++){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
    }

    if(flag == false){
        cout << "not a palindrome" << endl;
    }else{
        cout << "palindrome" << endl;
    }
    return 0;
}