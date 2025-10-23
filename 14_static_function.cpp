#include<iostream>
using namespace std;

class student{
    public:
    static int count;

    student(){
        count++;
    }

    static void printCount(){
        cout << "Total count of student is: " << student::count;
    }
};

int student :: count = 0;
int main() {
    student s1, s2, s3;

    // cout << "Total count of students is " << student::count;
    student::printCount();
    return 0;
}