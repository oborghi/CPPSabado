#include <data.h>
#include <iostream>

using namespace std;

//Doxygen

void Data::alterar(short dia, short mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}

void Data::imprimir() const
{
    if(m_ok)
    {
        cout << m_dia << '/'
             << m_mes << '/'
             << m_ano << '\n';
    }
    else
    {
        cout << "Data invalida!\n";
    }
}
