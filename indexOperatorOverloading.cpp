#include <iostream>
using namespace std;

class myArray
{
    int size;
    int *data;

public:
    myArray(int s) : size(s), data(new int[s]) {}
    int &operator[](int i)
    {
        if (i >= 0 && i < size)
        {
            return data[i];
        }
        else
        {
            cout << "error: Array index out of range ";
            return data[-1];
        }
    }
};
int main()
{
    myArray arr(5);
    for (int i = 0; i < 6; i++)
    {
        arr[i] = i * 2;
    }
    cout << "values inside array" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}