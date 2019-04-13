#ifndef DATA_H
#define DATA_H

#include <iostream>

//C++
class Data
{

// private:
// C++ antigo
//    short m_dia;
//    short m_mes;
//    short m_ano;
//    bool m_ok;

// C++ 11 ou superior
    short m_dia = 0;
    short m_mes = 0;
    short m_ano = 0;
    bool m_ok = false;
    enum { FEVEREIRO = 2, JULHO = 7};
    enum { MIN_ANO = 1900, MAX_ANO = 2100};


 public:

// C++ antigo
//    Data(){

//    }
//    Data() : m_dia(0), m_mes(0), m_ano(0), m_ok(false)
//    {
//    }


// C++ 11 ou superior
    Data() = default;

    Data(short dia, short mes, short ano);

    void alterar(short dia, short mes, short ano);

    inline void validar()
    {
        m_ok = m_dia >= 1 && m_dia <= ultimoDiaMes() && m_mes >=1 && m_mes <=12 && m_ano >= MIN_ANO && m_ano <= MAX_ANO;
    }

    inline bool anoBissexto() const
    {
        return !(m_ano & 3) && ((m_ano % 100) || !(m_ano % 400));
    }

    inline void imprimir() const {
        m_ok ? std::cout << m_dia << '/' << m_mes << '/' << m_ano << '\n' : std::cout << "Data invalida!\n";
    }

    inline short ultimoDiaMes() const
    {
        return (m_mes == FEVEREIRO) ? 28 + anoBissexto() : 30 + ((m_mes & 1) ^ (m_mes > JULHO));
    }

};

#endif // DATA_H
