#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        doSomething();
    }
    virtual void doSomething()
    {
        cout << "Base::doSomething()" << endl;
    }
    ~Base()
    {
        doSomething();
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        doSomething();
    }
    void doSomething() override
    {
        cout << "Derived::doSomething()" << endl;
    }
    ~Derived()
    {
        doSomething();
    }
};
int main()
{
    Derived d;
    return 0;
}