#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string input, reverse, lower;
    getline(cin, input);
    cout << "your name: " << input << endl;
    for (char c : input)
    {
        lower += tolower(c);
    }
    // cout<<sizeof(input)<<endl;
    for (int i = lower.length() - 1; i >= 0; i--) // lower.length() - 1 is important
        reverse += lower[i];
    cout << "Reverse your name: " << reverse << endl;

    if (lower == reverse)
    {
        cout << "is Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}
