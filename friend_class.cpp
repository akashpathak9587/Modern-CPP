#include <iostream>
using namespace std;

class Base
{
private:
    int private_variable;

public:
    Base() { private_variable = 10; }
    friend class derived;
    friend void display(Base &obj);
};

void display(Base &obj)
{
    cout << "friend class accessing base class private variable: " << obj.private_variable << endl;
}
class derived
{
public:
    void display(Base &obj)
    {
        cout << "private memeber of base class " << obj.private_variable << endl;
    }
};
int main()
{
    Base b;
    derived d;
    d.display(b);
    display(b);
    return 0;
}