#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<double, 5> notas;

    int i = 0;
    for (auto &n : notas) {
         while(true){
            cout << "Digite com nota [" << ++i << "] : ";
            cin >> n;

            if(n < 0.0 || n > 10.0){
                cout << "Nota invalida uma nota deve estar entre 0.0 e 10.0" << endl;
            } else {
                break;
            }
        }
    }

    cout << endl;

    i = 0;
    for (auto &n : notas) {
        cout << "O valor nota [" << ++i << "] eh: " << n << endl;
    }

    cout << endl << "A maior nota eh: " << *max_element(begin(notas), end(notas)) << endl;
    return 0;
}
