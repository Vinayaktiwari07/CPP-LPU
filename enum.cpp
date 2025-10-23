#include<iostream>
using namespace std;

enum states{br, up, guj, hp, hr, pb};
int main() {
    states s=br;

    if(s==br){
        cout << "br" << endl;
    }
    else{
        cout << "others" << endl;
    }
    return 0;
}