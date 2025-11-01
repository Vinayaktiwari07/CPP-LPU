#include<iostream>
using namespace std;
int main() {
    // ** Declaration

    // string s = "Vinayak";
    // string s("Vinatak tiwari");
    // s = "alok";

    // string s;
    // getline(cin ,s);

    // cout << s;


    // string str ="vinayak";
    // int len = str.size();

    // for(int i=0; i<len; i++){
    //     cout << str[i] << " ";
    // }


    // ** concatenation
    // string s2 = str;
    // cout << str;
    // string s2;

    // ** append is used for add string in variable.
    // s2.append ("hello");
    // cout<< s2;
    

    // ** for printing sub string.
    string s = "vinayak tiwari";
    string temp = s.substr(0,9);
    cout << temp << endl;
    // ** adding a character at the end.
    temp.push_back('s');
    cout << temp << endl;
    

    // ** removal of a character from the end.
    temp.pop_back();
    cout << temp << endl;


    // ** use of auto for loop.
    string s3 = " govind";
    for(auto& x : s3){
        cout <<x<< " ";
    }

    return 0;
}