#include <iostream>
using namespace std;
int main()
{
    int a[3] = {3, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    int *end = a + size;
    for (int *p = a; p < end; p++)
    {
        cout << p << "\t" << *p << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a + i << "\t" << *(a + i) << endl;
    }
    return 0;
}