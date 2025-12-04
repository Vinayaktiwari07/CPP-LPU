#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int marks;
    public:
    Student(int m){
        marks = m;
    }

    void show(){
        cout << marks;
    }

    void operator !(){
        marks = 0;
    }

    void operator ++(){  // pre increment
        marks+=10;
    }

    void operator ++(int){  // post increment
        marks-=10;
    }
};
int main() {
    Student s(30);
    s.show();
    cout << endl;
    // !s;
    // ++s;
    s++;
    s.show();
    return 0;
}