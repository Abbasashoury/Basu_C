#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    // find (.) position
    size_t dotPos = paragraph.find('.');        

    if (dotPos != string::npos) 
    {
        string firstSentence = paragraph.substr(0, dotPos + 1);
        cout << "First sentence: " << firstSentence << endl;
    } 
    else 
    {
        cout << "No sentence-ending punctuation found. Full input: " << paragraph << endl;
    }

    return 0;
}
