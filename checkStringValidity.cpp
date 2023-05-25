#include <iostream>
using namespace std;

int checkRow(char c)
{
    vector<char> rows1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    vector<char> rows2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    vector<char> rows3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    if (find(rows1.begin(), rows1.end(), c) != rows1.end())
    {
        return 1;
    }
    if (find(rows2.begin(), rows2.end(), c) != rows2.end())
    {
        return 2;
    }
    if (find(rows3.begin(), rows3.end(), c) != rows3.end())
    {
        return 3;
    }
    return 0;
}
bool checkValidity(string str)
{
    bool sameRow = true;
    int startingNum = checkRow(tolower(str[0]));
    for (int i = 1; i < str.length(); i++)
    {
        if (startingNum != checkRow(tolower(str[i])))
        {
            sameRow = false;
            break;
        }
    }
    return sameRow;
}
int main()
{
    vector<string> input = {"akash", "aman", "akdj"};
    for (string str : input)
    {
        bool result = checkValidity(str);
        if (result)
        {
            cout << "string character are in the same row" << endl;
        }
        else
        {
            cout << "string character are not in the same row" << endl;
        }
    }
}