#include <iostream>
using namespace std;
bool isNumber(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the string " << endl;
    cin >> str;
    if (isNumber(str))
    {
        cout << "Integer" << endl;
    }
    else
    {
        cout << "string" << endl;
    }
    return 0;
}