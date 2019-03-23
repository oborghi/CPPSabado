#include <iostream>

using namespace std;

int contagem(int inicio, int fim, int razao){
    for (; inicio < fim; inicio = inicio + razao);
    return inicio;
}

int main()
{
    int conrole = -1;
    int inicio = 0;
    int fim = 0;
    int razao = 0;

    while(conrole){
        cout << "Informe os numeros inicial, final e a razao - nessa ordem: " << endl;
        cin >> inicio;
        cin >> fim;
        cin >> razao;

        cout << "O resultado da soma eh: " << contagem(inicio,fim,razao) << endl;
        cout << "Deseja realizar novo calculo? (0 para encerra, qualquer outro numero para continuar)" << endl;
        cin >> conrole;
    }

    cout << "Fim de processamento" << endl;

    return 0;
}
