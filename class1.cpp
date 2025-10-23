#include<iostream>
using namespace std;

class Animal{
public:
    string name;
    string size;
    string type;

    void breed(){
        cout << "Breed" << endl;
    }


};

int main() {
    Animal Horse;

    Horse.name = "Saga";
    Horse.size = "Big";
    Horse.type = "Herbi";


    cout << Horse.name << endl;
    cout << Horse.size << endl;
    cout << Horse.type << endl;
    Horse.breed();
    return 0;
}