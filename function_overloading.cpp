#include <iostream>
using namespace std;

class OverloadDemo
{
public:
    // Function overloading based on different parameter types

    void printValue(int value)
    {
        cout << "Printing an integer: " << value << endl;
    }

    void printValue(float value)
    {
        cout << "Printing a float: " << value << endl;
    }

    void printValue(const char *value)
    {
        cout << "Printing a string: " << value << endl;
    }

    // Function overloading based on different number of parameters

    void addNumbers(int a, int b)
    {
        cout << "Sum of two integers: " << a + b << endl;
    }

    void addNumbers(int a, int b, int c)
    {
        cout << "Sum of three integers: " << a + b + c << endl;
    }

    // Function overloading based on different const qualifiers

    void displayValue(int value)
    {
        cout << "Displaying an integer: " << value << endl;
    }

    void displayValue(int value) const
    {
        cout << "Displaying a constant integer: " << value << endl;
    }
};

int main()
{
    OverloadDemo obj;

    // Function overloading based on different parameter types
    obj.printValue(10);
    obj.printValue(3.14f);
    obj.printValue("Hello");

    // Function overloading based on different number of parameters
    obj.addNumbers(5, 10);
    obj.addNumbers(2, 4, 6);

    // Function overloading based on different const qualifiers
    obj.displayValue(100);

    const OverloadDemo constObj;
    constObj.displayValue(200);

    return 0;
}
