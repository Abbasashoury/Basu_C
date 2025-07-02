#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    cout << "enter 3 numbers   :" << endl;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    cout << "size : " << numbers.size() << endl;
    cout << " items: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";
    }
    cout << endl;
    for (int i : numbers)
        cout << i << " ";
    cout << endl;

    numbers.insert(numbers.begin(), 100);
    cout << "after add 100 to begin ";
    for (int x : numbers)
        cout << x << " ";
    cout << endl;

    numbers.erase(numbers.begin() + 1);
    cout << "after delete secon item ";
    for (int x : numbers)
        cout << x << " ";
    cout << endl;

    cout << "first item : " << numbers.front() << endl;
    cout << " last item: " << numbers.back() << endl;

    numbers.clear();
    cout << "  vector size after Clear  : " << numbers.size() << endl;

    return 0;
}
