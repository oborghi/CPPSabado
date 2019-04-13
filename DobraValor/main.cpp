#include <iostream>
#include <vector>

using namespace std;

void dobrarValores(vector<int> *valores){
    unsigned long x = (*valores).size();
    for(unsigned long i = 0; i < x; i++){
        (*valores)[i] *= 2;
    }
}

void dobrarValoresRef(vector<int> &valores){
    for(int &valor : valores){
        valor *= 2;
    }
}

int main()
{
    vector<int> valores;
    valores.resize(3, 0);

    cout << "Informe tres valores para calcular:" << endl;

    for (unsigned long i = 0; i < 3; i++) {
        cin >> valores[i];
    }

    vector<int> valoresRef = valores;
    dobrarValores(&valores);

    cout << endl << "Os valores calculados com ponteiro sao:" << endl;

    for (int &valor : valores) {
        cout << endl << valor;
    }

    cout << endl;

    dobrarValoresRef(valoresRef);

    cout << endl << "Os valores calculados com referencia sao:" << endl;

    for (int &valorRef : valoresRef) {
        cout << endl << valorRef;
    }

    cout << endl << endl;

    return 0;
}
