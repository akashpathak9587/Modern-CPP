#include <iostream>
using namespace std;
class myClass
{
    int value;

public:
    myClass(int val) : value(val) {}
    int getValue()
    {
        return value;
    }
};

class myWrapper
{
    myClass *ptr;

public:
    myWrapper() : ptr(new myClass(42)) {}
    myClass *operator->()
    {
        return ptr;
    }
};
int main()
{
    myWrapper obj;
    cout << "value: " << obj->getValue() << endl;

    return 0;
}