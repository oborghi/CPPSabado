#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("/home/herik/arq.txt");
    while(file.good())
        cout << char(file.get());
    file.close();

    return 0;
}
