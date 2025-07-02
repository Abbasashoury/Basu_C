#include <iostream>
using namespace std;
int main()
{
    int i, num, is_prime;
    cout << "enter number:" << endl;
    cin >> num;
    is_prime = 1;
    for (i = 2; i <= num / 2; i++)
    {
        if (!(num % i))
            is_prime = 0;
    }
    if (is_prime)
        cout << "The number is prime";
    else
        cout << "The number is not prime";
    return 0;
}