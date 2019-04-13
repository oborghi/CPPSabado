#include <iostream>

using namespace std;

template <class TIPO>
TIPO minimo(TIPO x, TIPO y){
    return x < y ? x : y;
}

template <class TIPO>
TIPO maximo(TIPO x, TIPO y){
    return x > y ? x : y;
}

template <class TIPO>
TIPO soma(TIPO x, TIPO y){
    return x + y;
}

int main()
{
    int a=1, b=2;

    cout << "Minimo entre " << a << " e " << b << ": " << minimo(a,b) << endl;
    cout << "Maximo entre " << a << " e " << b << ": " << maximo(a,b) << endl;
    cout << "Soma entre " << a << " e " << b << ": " << soma(a,b) << endl;

    return 0;
}
