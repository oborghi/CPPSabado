#include <iostream>

using namespace std;

class MinhaUnion
{
    enum Tipo {INT, DOUBLE};
    Tipo tipoEmUso;
    union
    {
        int a;
        double b;
    };
public:
    MinhaUnion &operator=(int value)
    {
        a = value;
        tipoEmUso = INT;
        return *this;
    }
    MinhaUnion &operator=(double value)
    {
        b = value;
        tipoEmUso = DOUBLE;
        return *this;
    }
    friend ostream &operator<<(ostream &o, const MinhaUnion &m)
    {
        if(m.tipoEmUso == INT)
            o << m.a << '\n';
        else
            o << m.b << '\n';
        return o;
    }
};

int main()
{
    MinhaUnion minha;
    minha = 10;
    cout << minha;
    minha = 90.8;
    cout << minha;

    return 0;
}
