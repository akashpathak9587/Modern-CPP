#include <iostream>
using namespace std;
class AbstractClass
{
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
    virtual ~AbstractClass() = 0;           // pure virtual destructor
    void concreteFunction()
    {
        cout << "This is a concrete function in the abstract class." << endl;
    }
};

AbstractClass::~AbstractClass()
{
    cout << "base class destructor called" << endl;
}

class DerivedClass : public AbstractClass
{
public:
    void pureVirtualFunction() override
    {
        cout << "Implementation of pure virtual function in the derived class." << endl;
    }
    ~DerivedClass()
    {
        cout << "Dervied class destructor called." << endl;
    }
};

int main()
{
    // AbstractClass abstractObj; // Cannot instantiate an abstract class
    DerivedClass derivedObj;
    derivedObj.pureVirtualFunction(); // Calls the implementation in the derived class
    derivedObj.concreteFunction();    // Calls the concrete function from the abstract class
    return 0;
}
