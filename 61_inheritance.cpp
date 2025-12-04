#include<iostream>
using namespace std;

class base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class publicChild : public base{
    public:
    void show(){
        x = 10; // no issue
        y = 20; // no issue
        // z = 30; // issue will occur
    }
};

class protectedChild: protected base{
    public:
    void show(){
        x = 10;// no issue but this x will become protected now
        y = 20; // no issue
        // z = 30; // issue will occur
    }
};

class privateChild: private base{
    public:
    void show(){
        x = 10; // no issue but x will become private
        y = 20; // no issue but y will become private
        // z = 30; // issue will occur
    }
};
int main() {
    
    return 0;
}