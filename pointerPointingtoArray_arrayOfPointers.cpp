#include <iostream>
using namespace std;
int main()
{
    int(*p)[9];
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    p = &a;
    for (int i = 0; i < 9; i++)
    {
        cout << *(*(p) + i) << " ";
    }
    cout << endl;

    int *q[3];
    int b, c, d;
    b = 1, c = 2, d = 3;
    q[0] = &b, q[1] = &c, q[2] = &d;
    for (int i = 0; i < 3; i++)
    {
        cout << *q[i] << " ";
    }
    return 0;
}