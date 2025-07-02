#include <iostream>
using namespace std;

void add(int, int, int &);

int main()
{
    int a, b, z;
    a = 5;
    b = 6;
    add(a, b, z);
    cout << "sum:" << z;
    cout << "a:" << a << ",b:" << b;
    return 0;
}

void add(int x, int y, int &z)
{
    z = x++ + y++;
}