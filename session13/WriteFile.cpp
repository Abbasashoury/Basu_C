#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ofstream file;
    file.open("example.txt",ios::app); //ios::app (append) ios::in (default for ifstream) ios::out (default for ofstream) ios::trunc (default for ofstream)

    if (!file.is_open()) {
        cout << "Error in open file!" << endl;
        return 1;
    }

    file << "First file in C++" << endl;
    file << "This is a text file." << endl;

    file.close(); 
    cout << " Information Write to file Successfully ." << endl;
    return 0;
}
