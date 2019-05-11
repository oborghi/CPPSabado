#include <iostream>

using namespace std;

struct a
{
    bool   bVal;//1
    char   cVal;//1
    short  sVal;//2
    int    iVal;//4
    double dVal;//8
};

int main()
{
    cout << sizeof(a) << '\n';
    return 0;
}
