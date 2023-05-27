#include <iostream>
using namespace std;

class Base
{
protected:
    int value;

public:
    void display()
    {
        cout << "Base function called" << endl;
    }
    int fun()
    {
        return value;
    }
    int fun(int val)
    {
        value = val;
        return value;
    }
};

class Derived : public Base
{
public:
    using Base::fun;
    void display()
    {
        cout << "Derived function called" << endl;
    }
    int fun()
    {
        return 39;
    }
    int fun(int val1, int val2)
    {
        value = val1 + val2;
        return value;
    }
};
int main()
{
    Derived d;
    d.display();
    Base *b = new Base;
    b->display();
    cout << "Value of derived class : " << d.fun(45, 37) << endl;
    cout << "Value of derived class : " << d.fun(45) << endl;
    cout << "Value of derived class : " << d.fun() << endl;
    cout << "Value of base class : " << b->fun(45) << endl;
    return 0;
}