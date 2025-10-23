#include<iostream>
using namespace std;

union Student{
// public:
    int roll_no;
    int age;
    bool atten;
};
int main() {
    Student s1;

    s1.age = 18;
    s1.roll_no = 53;
    s1.atten = false;
    

    cout << s1.roll_no << endl;
    cout << s1.age << endl;
    cout << s1.atten << endl;
    
    return 0;
}