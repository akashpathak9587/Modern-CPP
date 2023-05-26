#include <iostream>
using namespace std;
int main()
{
    void *ptr;
    // int *i = ptr;    //this will show an error because this will allow implicit conversion
    int *i = (int *)ptr; // this is correct because we are explicitly converting
    cout << sizeof(ptr) << endl;
    cout << sizeof(i) << endl;
    return 0;
}