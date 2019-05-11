#include <iostream>

using namespace std;

int soma(int a = 0, int b = 0, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    cout << soma() << endl;
    cout << soma(10) << endl;
    cout << soma(10, 10) << endl;
    cout << soma(10, 10, 10) << endl;
    cout << soma(10, 10, 10, 10) << endl;
    return 0;
}
