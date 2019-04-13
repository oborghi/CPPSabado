#include <data.h>

Data::Data(short dia, short mes, short ano){
    alterar(dia, mes, ano);
}

void Data::alterar(short dia, short mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}
