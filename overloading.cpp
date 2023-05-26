#include <iostream>
using namespace std;
class Counter
{
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading the pre-increment operator
    Counter &operator++()
    {
        count++;
        return *this;
    }

    // Overloading the post-increment operator
    Counter operator++(int)
    {
        Counter temp = *this;
        count++;
        return temp;
    }

    int getCount() const
    {
        return count;
    }
};

int main()
{
    Counter c;

    // Using pre-increment operator
    ++c;
    cout << "Count after pre-increment: " << c.getCount() << endl;

    // Using post-increment operator
    Counter d = c++;
    cout << "Count after post-increment: " << c.getCount() << endl;
    cout << "Value of d: " << d.getCount() << endl;

    return 0;
}
