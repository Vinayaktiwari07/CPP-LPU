#include<iostream>
using namespace std;

class Student{
public:
    Student(int a, string name, bool scholar){
        age = a;
        fullname = name;
        schl = scholar;
    }

    void getname(){
        cout << "my name is: " << endl;
    }
};
int main() {
    Student s(25, "Vinayak", true);

    cout << s.fullname << endl;
    cout << s.age << endl;
    cout << s.schl << endl;

    // Student s2;
    // s2.name = "Alok";

    // cout << s2.name << endl;

    Student s3("Anna");

    s3.getname();
    return 0;
}