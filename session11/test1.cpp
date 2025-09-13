#include <iostream>
using namespace std;
int main()
{
    int a[3] = {3, 6, 7};
    int size = sizeof(a) / sizeof(a[0]); /*******/
    cout << a << endl;                   /*******/
    int *end = a + size;                 /*******/
    for (int *p = a; p < end; p++)       /*****اشاره به ادرس ایتجوریه**/
    {
        cout << p << "\t" << *p << endl;
    }
    cout << end << endl
         << *end << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a + i << "\t" << *(a + i) << endl; /*******/
    }
    return 0;
}