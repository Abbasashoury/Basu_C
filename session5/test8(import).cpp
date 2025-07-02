#include <iostream>
using namespace std;

int s = 10;
void func1()
{
    int s = 0;
    s++;
    cout << "Local variable:" << s << endl;
}

void func2()
{
    s++;
    cout << "global variable:" << s << endl;
}
int main()
{
    func1();
    func1();
    func2();
    func2();
    cout << "main " << s << endl;
    return 0;
}
/*
int  s=10;
void func(){
    static int s = 0;
    s++;
    cout<< "Local static: "<< s <<endl;
}
int main(){
    func();
    func();
    func();
    func();

    cout<< "Global:" << s <<endl;
    return 0;
}
*/

/*
const int x=2;فرق اینو و define رو که میدونی
#define x=2; این کلا نمیتونی توی بلاک های دیگه هم تغییرش بدی ولی اگه گلوبال باشه میتونی فراخوانی اش رو تغییر بدی ولی خودش تغییر نکنه
*/