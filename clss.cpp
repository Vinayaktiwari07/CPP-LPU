#include<iostream>
using namespace std;

class Student{
public:
    int age ;
    string name ;
    bool scholarship;

    Student(){
        name = 'default';
        age = 100;
        scholarship = false;
    }

    void getName(){
        cout << "My name is: " << name;
    }

};

int main() {
    Student s1;
    Student s2;

    s1.age = 19;
    s1.name = "alok";
    s1.scholarship = true;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << (s1.scholarship ? "Scholarship: Yes" : "Scholarship: No") << endl;
    
    s2.age = 20;
    s2.name = "vinayak";
    s2.scholarship = true;

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << (s2.scholarship ? "Scholarship: Yes" : "Scholarship: No") << endl;
    return 0;
}




