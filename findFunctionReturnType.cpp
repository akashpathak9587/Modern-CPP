#include <iostream>
using namespace std;
int main()
{
    string s = "akash";
    cout << typeid(find(s.begin(), s.end(), 'd') != s.begin()).name() << endl;
    cout << typeid(s.begin()).name() << endl;
    // cout << (s.begin()) << endl;
    return 0;
}