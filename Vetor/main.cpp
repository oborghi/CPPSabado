#include <iostream>
#include <chrono>

//void imprimir(int a); //Cópia - C/C++
//void imprimir(int *a); //Endereço - C/C++
//void imprimir(int &a); //Endereço - C++
//void imprimir(int &&a); //Referencia RValue - C++ 11 >

using namespace std;
using namespace chrono;

template <typename T>
class Vetor
{
    T *m_elements = nullptr;
    unsigned int m_size = 0;
    int tamanhoMaximo = 1;
    int reserva = 0;
public:
    //(1)
    Vetor() = default;

    //(n)
    Vetor(const Vetor &other)
    {
        m_size = other.m_size;
        m_elements = new T[m_size];
        for(unsigned int i = 0; i < m_size; ++i)
            m_elements[i] = other.m_elements[i];
    }

    //(1)
    Vetor(Vetor &&other)
    {
        m_size           = other.m_size;
        m_elements       = other.m_elements;
        other.m_size     = 0;
        other.m_elements = nullptr;
    }

    //(n)
    Vetor & operator =(const Vetor &other)
    {
        clear();
        m_size = other.m_size;
        m_elements = new T[m_size];
        for(unsigned int i = 0; i < m_size; ++i)
            m_elements[i] = other.m_elements[i];
        return *this;
    }

    //(1)
    Vetor & operator =(Vetor &&other)
    {
        clear();
        m_size           = other.m_size;
        m_elements       = other.m_elements;
        other.m_size     = 0;
        other.m_elements = nullptr;
        return *this;
    }

    //(1)
    ~Vetor()
    {
        clear();
    }

    //(1)
    void clear()
    {
        if(m_elements)
            delete []m_elements;
        m_size = 0;
        m_elements = nullptr;
    }


    void push_back(const T &value)
    {
        //Melhor caso - (1)
        if(reserva > 0)
        {
            m_elements[m_size] = value;
        }
        //Pior caso - (n)
        else
        {
            reserva = tamanhoMaximo;
            T *temp = new T[m_size + reserva];
            for (unsigned int i = 0; i < m_size; ++i)
                temp[i] = move(m_elements[i]);
            temp[m_size] = value;
            if(m_elements)
                delete []m_elements;
            m_elements = temp;
        }
        --reserva;
        ++m_size;
    }


    //(n)
    void push_back(T &&value)
    {
        //Melhor caso - (1)
        if(reserva > 0)
        {
            m_elements[m_size] = value;
        }
        //Pior caso - (n)
        else
        {
            reserva = tamanhoMaximo;
            T *temp = new T[m_size + reserva];
            for (unsigned int i = 0; i < m_size; ++i)
                temp[i] = move(m_elements[i]);
            temp[m_size] = move(value);
            if(m_elements)
                delete []m_elements;
            m_elements = temp;
        }
        --reserva;
        ++m_size;
    }

    void resize(int tamanho, const T &value = T())
    {
        clear();
        m_elements = new T[tamanho];
        m_size = tamanho;
        for (unsigned int i = 0; i < m_size; ++i)
            m_elements[i] = value;
    }

    //(1)
    unsigned int size() const
    {
        return m_size;
    }

    //(1)
    T &operator [](unsigned int index) const
    {
        return m_elements[index];
    }

    int getTamanhoMaximo() const
    {
        return tamanhoMaximo;
    }

    void setTamanhoMaximo(int value)
    {
        tamanhoMaximo = value;
    }

};

//1000 = 0
//10000 = 20
//100000 = 8168


//1000 = 0
//10000 = 5
//100000 = 2021

//1000 = 0
//10000 = 2
//100000 = 526

//1000 = 0
//10000 = 0
//100000 = 91

int main()
{
    int tamanho = 10000000;
    Vetor<double> numeros;
    numeros.setTamanhoMaximo(100000);
    auto inicio = high_resolution_clock::now();
    for (int i = 0; i < tamanho; ++i)
        numeros.push_back(i);
    auto fim    = high_resolution_clock::now();

    auto tempo = duration_cast<milliseconds>(fim - inicio).count();
    cout << "Tempo: " << tempo << '\n';
    cout << "Tamanho: " << numeros.size() << '\n';

    return 0;
}
