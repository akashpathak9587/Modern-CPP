#include <iostream>
#include <set>
using namespace std;

int checkQwertyRow(char x)
{
    set<char> first_row = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '_', '+'};
    set<char> second_row = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
    set<char> third_row = {'A', 'S', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', ';', ':', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    set<char> fourth_row = {'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    if (first_row.count(x) > 0)
    {
        return 1;
    }
    else if (second_row.count(x) > 0)
    {
        return 2;
    }
    else if (third_row.count(x) > 0)
    {
        return 3;
    }
    else if (fourth_row.count(x) > 0)
    {
        return 4;
    }
    return 0;
}
bool checkValidity(string str)
{
    char x = str[0];
    int row = checkQwertyRow(x);
    for (int i = 1; i < str.length(); i++)
    {
        x = str[i];
        if (row != checkQwertyRow(x))
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string str = "hello";
    if (checkValidity(str))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}