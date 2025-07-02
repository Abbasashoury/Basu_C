#include <iostream>
using namespace std;
void swap_byVal(int, int);
void swap_byRef(int &, int &);
int main()
{
    int a = 4, b = 5;
    cout << "a,b before call:" << a << "," << b << endl;
    swap_byVal(a, b);
    cout << "a,b after call by value:" << a << "," << b << endl;
    swap_byRef(a, b);
    cout << "a,b after call by Ref:" << a << "," << b << endl;

    return 0;
}
void swap_byVal(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void swap_byRef(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}