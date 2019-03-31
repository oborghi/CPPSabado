#include <iostream>
#include <matematica.h>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = maximo(a,b);
    int d = minimo(a,b);

    cout << "O maior entre " << a << " e " << b << " eh " << c << endl;
    cout << "O maior entre " << a << " e " << b << " eh " << d << endl;

    return 0;
}
