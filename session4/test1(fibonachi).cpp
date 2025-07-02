#include <iostream>
using namespace std;

int main()
{
    // fibonachi fn=fn-1+fn-2
    long bound;
    cout << "Enter a positive number:";
    cin >> bound;
    cout << " Fibonacci numbers<" << bound << ":\n 0,1";
    long f0 = 0, f1 = 1;
    while (true)
    {
        long f2 = f0 + f1;
        if (f2 > bound)
            break;
        cout << "," << f2;
        f0 = f1;
        f1 = f2;
    }
    return 0;
}

/* بازگشتی
int fibonachi(int f1, int f2, int n)
{
    static int f3 = 0, i = 1;

    if (i == n - 1)
        return f3;
    f3 = f1 + f2;
    i++;
    return fibonachi(f2, f3, n);
}
int main()
{
    int f1 = 0, f2 = 1, n;
    cin >> n;

    cout << fibonachi(f1, f2, n);

    return 0;
}
*/