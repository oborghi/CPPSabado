#include <iostream>
#include <stdarg.h>
#include <stdio.h>

using namespace std;

//int soma(int nParam, ...)
//{
//    va_list lista;
//    va_start(lista, nParam);
//    int result = 0;
//    for(int i = 0; i < nParam; ++i)
//        result += va_arg(lista, int);
//    va_end(lista);
//    return result;
//}

//int main()
//{
//    printf("%d %f\n", 10, 5.5);
//    cout << soma(20, 40, 60) << '\n';

//    return 0;
//}

void newPrintf()
{
}

template <typename Valor, typename ...Parametros>
void newPrintf(const Valor &cabeca, const Parametros &...calda)
{
    cout << cabeca;
    newPrintf(calda...);
}

int main()
{
    newPrintf("A soma de 10 com 20 eh: ", (10 + 20),
              "\nA divisão de 19 por 2 eh: ", (19.0 / 2.0));
    return 0;
}
