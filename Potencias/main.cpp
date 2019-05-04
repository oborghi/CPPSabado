#include <iostream>

using namespace std;

//int potenciaDeDois(int expoente){
//    int base = 1;
//    while(expoente != 0){
//        base*= 2;
//        expoente--;
//    }
//    return base;
//}

int potenciaDeDois(int expoente){
    return 2 << (expoente - 1);
}

int main()
{
    //4
    cout << "2^2 = " << potenciaDeDois(2) << endl;
    //8
    cout << "2^3 = " << potenciaDeDois(3) << endl;
    return 0;
}
