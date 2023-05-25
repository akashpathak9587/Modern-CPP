#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s = "geeks for geeks geeks contribution placements akash pathak";
    cout << char(toupper(s[0]));
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cout << " " << char(toupper(s[i + 1]));
        }
    }
    cout << endl;
    return 0;
}