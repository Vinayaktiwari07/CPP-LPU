#include<iostream>
using namespace std;

class math{
    public:
    int a,b;

    void sum(int x, int y){
        cout << x+y << endl;
    }

    inline void sumOfNum(int x, int y, int z);
};


inline void math :: sumOfNum(int x, int y, int z){
    cout << x+y+z;
} 
int main() {
    math m;
    m.sum(2,3);

    m.sumOfNum(1,2,3);
    return 0;
}