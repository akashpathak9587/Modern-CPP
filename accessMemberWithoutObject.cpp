#include <iostream>
using namespace std;

class MyClass
{
public:
    static int myStaticVariable;
    int myNonStaticVariable;
    static void myStaticFunction()
    {
        cout << "Static function called " << endl;
    }
    void myNonStaticFunction()
    {
        cout << "Non-static function called" << endl;
    }
};

int MyClass::myStaticVariable = 42;
int main()
{
    cout << "Static variable " << MyClass::myStaticVariable << endl;
    MyClass::myStaticFunction();

    MyClass *obj = new MyClass();
    cout << "Non-static variable " << obj->myNonStaticVariable << endl;
    obj->myNonStaticFunction();

    return 0;
}