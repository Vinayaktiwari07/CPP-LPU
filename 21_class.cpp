#include<iostream>
using namespace std;

class Student{
    int roll_no, age;

    public: void setvalue(int a, int b){
        age = a;
        roll_no = b;
    }

    void getvalue(){
        cout << age << " "<< roll_no << endl;
    }
};
int main() {
    Student s;
    // s.setvalue(18,53);
    // s.getvalue();

    // int a = 23;
    // int* ptr = &a;

    Student* ptr = &s;
    // (*ptr).setvalue(12,22);
    // (*ptr).getvalue();

    ptr -> setvalue(33,34);
    ptr -> getvalue();

    return 0;
}