#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers;
    numbers.push_back(10); // add item to vector
    numbers.push_back(20);
    numbers.push_back(30);
    cout << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " " << endl; // access to i-th item
    }
    numbers.insert(numbers.begin() + 1, 90); // insert 90 at second item
    cout << numbers.front() << endl;         // print first item
    numbers.erase(numbers.begin());          // erase first item
    numbers.pop_back();                      // delete  item from end
    numbers.clear();                         // clear vector

    return 0;
}