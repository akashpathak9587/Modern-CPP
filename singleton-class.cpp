#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    Singleton(){};

public:
    static Singleton *getInstance()
    {
        if (!instance)
        {
            instance = new Singleton();
        }
        return instance;
    }
    void showMessage()
    {
        cout << "Hello from Singleton!" << endl;
    }
};

Singleton *Singleton::instance = NULL;
int main()
{
    Singleton *singletonInstance = Singleton::getInstance();

    singletonInstance->showMessage();
    cout << singletonInstance << endl;

    Singleton *singletonInstance2 = Singleton::getInstance();
    singletonInstance2->showMessage();
    cout << singletonInstance2 << endl;

    return 0;
}