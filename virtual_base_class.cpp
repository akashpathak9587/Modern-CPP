#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Message printing..." << endl;
    }
};

class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};
int main()
{
    D d;
    d.print();

    return 0;
}