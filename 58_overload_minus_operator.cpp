#include<iostream>
using namespace std;

class point{
    public:
    int x, y;

    point(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    
    void operator -(){
        x = -1 * x;
        y = -1 * y;
    }
    void show(){
        cout << x << endl;
        cout << y << endl;
    }


};

int main() {
    point p(10, 70);
    p.show();
    cout << endl;
    -p;
    p.show();

    return 0;
}