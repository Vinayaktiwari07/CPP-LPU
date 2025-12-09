#include<iostream>
using namespace std;

class student{
    public:
    string name;
    student(string nameOfStudent){
        name = nameOfStudent;
        cout << name << endl;
    }

};

class college{
    public:
    student* s;
    college(student* st){
        s = st;
        cout << "college is here: " << endl;
    }

    void print(){
        cout << "hello i am " << s->name;
    }

};
int main() {
    student s("Vinayak");
    college c(&s);
    c.print();


    return 0;
}