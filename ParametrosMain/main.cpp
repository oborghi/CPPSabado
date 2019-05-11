#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 1; i < argc; ++i)
    {
        cout << "Lendo: " << argv[i] << "\n\n";

        ifstream file;
        file.open(argv[i]);
        while(file.good())
            cout << char(file.get());
        file.close();

        cout << "\n\n\n";
    }
    return 0;
}
