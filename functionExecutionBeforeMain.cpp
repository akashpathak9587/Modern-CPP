#include <iostream>
using namespace std;

struct functionExecutor
{
    functionExecutor()
    {
        cout << "Calling function before main function execution..." << endl;
        myfunction();
    }
    void myfunction()
    {
        cout << "Hello from myfunction" << endl;
    }
    ~functionExecutor()
    {
        cout << "Calling function after main function execution..." << endl;
    }
};

functionExecutor fe;
int main()
{
    cout << "Hello from main function " << endl;
    return 0;
}