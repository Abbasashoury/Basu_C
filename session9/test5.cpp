#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a = 100;
    int &b = a;
    b = 200;
    cout << "a:" << a << " ,b: " << b;
    return 0;
}
