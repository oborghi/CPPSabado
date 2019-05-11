#include <iostream>
#include <stdio.h>
#include <stdarg.h>

using namespace std;

int soma(int nParam, ...){
    va_list lista;
    va_start(lista, nParam);
    int result = 0;
    for(int i = 0; i < nParam; ++i)
        result += va_arg(lista, int);
    va_end(lista);
    return result;
}

int main()
{
    cout << soma(2, 40, 60) << endl;
    return 0;
}
