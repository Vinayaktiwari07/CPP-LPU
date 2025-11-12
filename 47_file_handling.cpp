#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream out("data.txt"); // open // create file
    out << "Hello Duniye\n"; // write to file
    out.close(); //close file



    //I wnat to read from a file

    ifstream in("data.txt");
    string line;
    while(getline(in, line)){
        cout << line << endl;
    }
    in.close();

    fstream file;
    file.open("data.txt", ios::out | ios::app); //append mode
    file << "Another hello from Vinayak \n";
    file.close();

    
    return 0;
}