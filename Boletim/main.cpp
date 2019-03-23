#include <iostream>

using namespace std;

bool isAprovado(float nota1, float nota2){
    return ((nota1 + nota2) / 2) >= 6;
}

bool isValorInvalido(float a){
    return a < 0 || a > 10;
}

int main()
{
    int nota1;
    int nota2;

    cout << "Informe a nota 1: ";
    cin >> nota1;

    if(isValorInvalido(nota1)){
        cout << "Valor da nota 1 é inválido! \n";
        return 0;
    }

    cout << "Informe a nota 2: ";
    cin >> nota2;

    if(isValorInvalido(nota2)){
        cout << "Valor da nota 2 é inválido! \n";
        return 0;
    }

    if(isAprovado(nota1, nota2))
        cout << "Aprovado";
    else
        cout << "Reprovado";

    cout << '\n';

    return 0;
}
