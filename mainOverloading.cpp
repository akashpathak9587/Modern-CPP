#include <iostream>
using namespace std;

class Test
{
public:
    int main(int s)
    {
        cout << s << "\n";
        return 0;
    }
    int main(string s)
    {
        cout << s << "\n";
        return 0;
    }
    int main(int s, int m)
    {
        cout << s << " " << m << endl;
        return 0;
    }
};
int main()
{
    Test obj;
    obj.main(3);
    obj.main("I love c++");
    obj.main(9, 6);
    return 0;
}