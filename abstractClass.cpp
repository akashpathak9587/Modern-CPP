#include <iostream>

class AbstractClass
{
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function

    void concreteFunction()
    {
        std::cout << "This is a concrete function in the abstract class." << std::endl;
    }
};

class DerivedClass : public AbstractClass
{
public:
    void pureVirtualFunction() override
    {
        std::cout << "Implementation of pure virtual function in the derived class." << std::endl;
    }
};

int main()
{
    // AbstractClass abstractObj;  // Cannot instantiate an abstract class
    DerivedClass derivedObj;
    derivedObj.pureVirtualFunction(); // Calls the implementation in the derived class
    derivedObj.concreteFunction();    // Calls the concrete function from the abstract class

    return 0;
}
