#ifndef DATA_H
#define DATA_H

class Data
{
    //Inicialização de membros in-class (somente C++ 11 >)
    short m_dia = 0;
    short m_mes = 0;
    short m_ano = 0;
    bool  m_ok  = false;
    enum {FEVEREIRO = 2, JULHO = 7};
    enum {MIN_ANO = 1900, MAX_ANO = 2100};
public:
    Data() = default; //Somente C++ 11 >

    Data(short dia, short mes, short ano)
    {
        alterar(dia, mes, ano);
    }

    void alterar(short dia, short mes, short ano);

    void imprimir() const;

    inline void validar()
    {
        m_ok = m_dia >= 1 && m_dia <= ultimoDiaMes() &&
               m_mes >= 1 && m_mes <= 12 &&
               m_ano >= MIN_ANO && m_ano <= MAX_ANO;
    }

    inline bool anoBissexto() const
    {
        return !(m_ano & 3) && ((m_ano % 100) || !(m_ano % 400));
    }

    inline short ultimoDiaMes() const
    {
        return (m_mes == FEVEREIRO) ? 28 + anoBissexto() :
                                      30 + ((m_mes & 1) ^ (m_mes > JULHO));
    }
};

#endif // DATA_H
