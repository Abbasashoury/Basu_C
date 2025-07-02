#include <iostream>
using namespace std;
void get(int *&a, int &n)
{
    cout << "Enter number of item:";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    int *a;
    get(a, n);
    print(a, n);

    delete a;
    print(a, n);
    return 0;
}