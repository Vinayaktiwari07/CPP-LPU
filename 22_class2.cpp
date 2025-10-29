#include<iostream>
using namespace std;

class Student{
    int roll_no, age;

    public: void setvalue(int age, int roll_no){
        this -> age = age;
        this -> roll_no = roll_no;
    }

    void getvalue(){
        cout << age << " "<< roll_no << endl;
    }
};
int main() {
    // Student s;
    // s.setvalue(18,53);
    // s.getvalue();

    // int a = 23;
    // int* ptr = &a;

    int size = 5;
    // Student* ptr = &s;
    Student *s = new Student[size];
    Student* head = s;
    // (*ptr).setvalue(12,22);
    // (*ptr).getvalue();

    // ptr -> setvalue(33,34);
    // ptr -> getvalue();

    for(int i=0; i<size; i++){
        int a, b;
        cin >> a>>b;
        s -> setvalue(a, b);
        s++;
    }

    for(int i=0; i<size; i++){
        head -> getvalue();
        head++;
    }

    return 0;
}