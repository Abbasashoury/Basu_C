#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, old_word, new_word;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the word to replace: ";
    cin >> old_word;

    cout << "Enter the new word: ";
    cin >> new_word;

    int pos = 0;
    while ((pos = sentence.find(old_word, pos)) != -1) {
        sentence.replace(pos, old_word.length(), new_word);
        pos += new_word.length(); 
    }
    cout << "Updated sentence: " << sentence << endl;
    return 0;
}