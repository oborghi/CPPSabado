#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string path("/home/herik/IO.txt");
    fstream file;
    cout << "Abrindo " << path << " em modo de escrita.\n\n";
    file.open(path.data(), ios_base::out);
    file << "Testando...\n";
    file.close();

    cout << "Abrindo " << path << " em modo de leitura.\n\n";
    file.open(path.data(), ios_base::in);
    while(file.good())
        cout << char(file.get());
    file.close();
    return 0;
}
