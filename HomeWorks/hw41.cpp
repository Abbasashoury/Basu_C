#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) // خواندن عناصر آرایه
        cin >> a[i];

    int min1 = INT_MAX, min2 = INT_MAX; // مقداردهی اولیه برای کمینه و دومین کمینه
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min1)
        {                // اگر عنصر فعلی کمتر از کمینه فعلی باشد
            min2 = min1; // کمینه قبلی می‌شود دومین کمینه
            min1 = a[i]; // عنصر فعلی می‌شود کمینه جدید
        }
        else if (a[i] < min2 && a[i] != min1)
        {                // اگر عنصر فعلی بین min1 و min2 باشد
            min2 = a[i]; // مقدار دومین کمینه به‌روزرسانی می‌شود
        }
    }
    if (min2 == INT_MAX) // اگر دومین کمینه پیدا نشد
        cout << "No second minimum found.\n";
    else
        cout << "Second minimum: " << min2 << endl;
    return 0;
}