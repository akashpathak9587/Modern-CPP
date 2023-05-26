#include <iostream>
using namespace std;
int main()
{
    int p = 100000;
    int q = 100000;
    cout << p * q << endl;
    cout << (long int)p * q << endl;
    cout << (long long int)p * q << endl;
    return 0;
}