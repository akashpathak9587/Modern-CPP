#include <iostream>
using namespace std;
int main()
{
    string str = "ggggg";
    bool sameChar = true;
    char firstChar = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if (firstChar != str[i])
        {
            sameChar = false;
            break;
        }
    }
    if (sameChar)
        cout << "charachter are same ";
    else
        cout << "charachter are not same " << endl;
    return 0;
}