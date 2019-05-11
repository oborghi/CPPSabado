#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("/home/herik/textoOFSSTREAM.txt");
    file << "Testando...\n";
    file.close();

    return 0;
}
