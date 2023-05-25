#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str = "Simple question to check your software";
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        cout << char(toupper(word[0])) << " ";
    }
    return 0;
}