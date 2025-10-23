#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;

};
int main() {
    Student s1;

    s1.name= "Alok";
    s1.roll_no = 01;

    cout << s1.name << endl;
    cout << s1.roll_no << endl; 
    return 0;
}