#include <data.h>

void Data::alterar(short dia, short mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}

int Data::comparar(const Data &dt2) const
{
    if (m_ano != dt2.m_ano)
        return (m_ano - dt2.m_ano);

    return (m_mes != dt2.m_mes) ? m_mes - dt2.m_mes : m_dia - dt2.m_dia;
}
