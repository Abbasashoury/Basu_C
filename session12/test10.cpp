#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    size_t endPos = paragraph.find_first_of(".!?");

    if (endPos != string::npos) 
    {
        string firstSentence = paragraph.substr(0, endPos + 1); 
        cout << "First sentence: " << firstSentence << endl;
    }
     else 
    {
        cout << "No sentence-ending punctuation found. Full input: " << paragraph << endl;
    }

    return 0;
}
