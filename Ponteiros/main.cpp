#include <iostream>

using namespace std;

void calcular(int *a, int *b, int *c){
    *a += 10;
    *b += 20;
    *c += 30;
}


int main()
{
    int a;
    int b;
    int c;

    cout << "Informe 3 números: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    calcular(&a, &b, &c);

    cout << "Valor de a eh:" << a << endl;
    cout << "Valor de b eh:" << b << endl;
    cout << "Valor de c eh:" << c << endl;

    return 0;
}
