#include <iostream>

using namespace std;

inline int maior(int a, int b){
    return a > b ? a : b;
}

inline int menor(int a, int b){
    return a < b ? a : b;
}


// F8 - Add breakpoint
// Command Y - Rodar no modo Debug
// F10 - Executar linha a linha


int main()
{
    int a = 10;
    int b = 20;
    int c = maior(a, b);

    cout << "O maior entre " << a
         << " e " << b << " eh " << c << '\n';

    c = menor(a, b);

    cout << "O menor entre " << a
         << " e " << b << " eh " << c << '\n';

    return 0;
}
