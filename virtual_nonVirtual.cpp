#include <iostream>
using namespace std;

class Base
{
public:
    void nonVirtualFunction()
    {
        cout << "Base::nonVirtualFunction()" << endl;
        virtualFunction();
    }
    virtual void virtualFunction()
    {
        cout << "Base::virtualFunction()" << endl;
    }
};

class Derived : public Base
{
public:
    void virtualFunction()
    {
        cout << "Derived::virtualFunction()" << endl;
    }
};
int main()
{
    Base *b = new Derived();
    b->nonVirtualFunction();

    return 0;
}