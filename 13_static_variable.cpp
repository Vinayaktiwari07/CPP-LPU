#include<iostream>
using namespace std;

class student{
    public:
    static int count;

    student(){
        count++;
    }
};

int student :: count = 0;
int main() {
    student s1, s2, s3;

    cout << "Total count of students is " << student::count;
    return 0;
}