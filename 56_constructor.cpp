#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    string name;

    public:
    Student(int a, string n) : age(a), name(n){
        cout << "Constructor executed" << endl;
    }

    void display(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


int main() {
    Student s(18, "Alok");
    
    s.display();
    return 0;
}