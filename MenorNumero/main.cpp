#include <iostream>

using namespace std;

inline int menor(int a, int b){
    return a < b ? a : b;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = menor(a, b);
    cout << "O menor valor entre " << a << " e " << b << " eh " << c;
    return 0;
}
