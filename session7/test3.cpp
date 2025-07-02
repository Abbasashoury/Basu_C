#include <iostream>
// count repeat X in Array
using namespace std;
void Count_X(int a[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
            c++;
    }

    cout << " " << c;
}
int main()
{

    int a[6] = {3, 4, 5, 7, 3, 3};
    int x;

    cout << "enter x:";
    cin >> x;

    Count_X(a, 6, x);

    return 0;
}