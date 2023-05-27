#include <iostream>
using namespace std;
class BaseClass
{
public:
    virtual void display()
    {
        cout << "Base class member function" << endl;
    }
};

class Derived : public BaseClass
{
public:
    void display()
    {
        cout << "Derived class member function" << endl;
    }
};
int main()
{
    BaseClass *p = new Derived();
    BaseClass *b = new BaseClass();
    p->display();
    b->display();
    delete p;
    delete b;
    return 0;
}