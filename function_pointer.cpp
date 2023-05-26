#include <iostream>
using namespace std;

int *p()
{
    int a = 6, b = 3;
    int c = a + b;
    int *t = &c;
    return t;
}
int main()
{
    cout << "The result is " << *p() << endl;
    int *(*q)() = p;
    cout << "The result is " << *q() << endl;
    return 0;
}