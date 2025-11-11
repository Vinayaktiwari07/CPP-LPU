#include<iostream>
using namespace std;

class Student{
public:
    int age;
    string name;
    // default constructor
    // Student(){
    //     // age = 12;
    // }

    Student (int ageOfStudent = 20,string nameOfStudent = "Unknown" ){
        age = ageOfStudent;
        name = nameOfStudent;
    }
};
int main() {
    // Student s;

    // s.roll_no = 12;
    // s.age = 11;

    // cout << s.roll_no << endl;
    // cout << s.age << endl;

    Student s1(23, "Vinayak");
    // Student s2("anil");
    Student s3;

    cout << s1.age << endl;;
    cout << s1.name << endl;
    cout << s3.age << endl;
    
    return 0;
}