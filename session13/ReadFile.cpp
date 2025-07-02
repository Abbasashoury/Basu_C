#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");     

    if (!file) {
        cout << "  Error in open file    !" << endl;
        return 1;
    }

    string line;
    file.seekg(0);
    getline(file,line);
    cout <<line;
    // while (getline(file, line)) {
    //     cout << line << endl;
    // }

    file.close();    

    return 0;
}
